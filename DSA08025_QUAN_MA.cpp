#include <bits/stdc++.h>
using namespace std;


const pair<int, int> d[8] = {{-2, -1}, {-2, 1}, {-1, -2,}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
int si, sj, ti, tj;

int path[9][9];
bool used[9][9];
void BFS(int u, int v){
    path[u][v] = 0;
    queue<pair<int,int>> q;
    q.push({u,v});
    used[u][v] = true;
    while (!q.empty()) {
        pair<int,int> tmp = q.front();
        q.pop();
        int x = tmp.first, y = tmp.second;
        for (int i = 0; i < 8; ++i) {
            int x1 = x + d[i].first;
            int y1 = y + d[i].second;
            if (x1 >= 1 && x1 <= 8 && y1 >= 1 && y1 <= 8 && !used[x1][y1]) {
                path[x1][y1] = path[x][y] + 1;
                used[x1][y1] = true;
                q.push({x1,y1});
            }
        }
    }
}

void testCase() {
    string s; cin >> s;
    sj = (int)(s[0] - 'a' + 1);
    si = (int)(s[1] - '0');
    string t; cin >> t;
    tj = (int)(t[0] - 'a' + 1);
    ti = (int)(t[1] - '0');
    memset(used, false, sizeof(used));
    memset(path, 0, sizeof(path));
    BFS(si,sj);
    cout << path[ti][tj] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
    }
    return 0;
}
