#include <bits/stdc++.h>
using namespace std;


const pair<int, int> d[8] = {{-2, -1}, {-2, 1}, {-1, -2,}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
int n,m;
int a[1001][1001];
int path[1001][1001];
bool used[1001][1001];
int BFS(int u, int v){
    path[u][v] = 0;
    queue<pair<int,int>> q;
    q.push({u,v});
    while (!q.empty()) {
        pair<int,int> tmp = q.front();
        q.pop();
        int x = tmp.first, y = tmp.second;
        if( x == n && y == m) return path[x][y];
        if(x + a[x][y] <= n && !used[x + a[x][y]][y]){
        	q.push({x + a[x][y], y});
        	path[x + a[x][y]][y] = path[x][y] + 1;
        	used[x + a[x][y]][y] = true;
		}
		if(y + a[x][y] <= m && !used[x][y + a[x][y]]){
        	q.push({x, y + a[x][y]});
        	path[x][y + a[x][y]] = path[x][y] + 1;
        	used[x][y + a[x][y]] = true;
		}
    }
    return -1;
}

void testCase() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= m; j++){
    		cin >> a[i][j];
		}
	}
	cout << BFS(1,1) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
    	memset(path, 0, sizeof(path));
    	memset(used, false, sizeof(used));
        testCase();
    }
    return 0;
}
