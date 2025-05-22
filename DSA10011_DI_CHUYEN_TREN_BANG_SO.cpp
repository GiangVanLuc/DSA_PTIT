#include<bits/stdc++.h>
#define ll long long
#define t3 pair<int, pair<int,int>>

using namespace std;

int di[4] = {-1, 0, 1, 0};
int dj[4] = {0, 1, 0, -1};

int n, m, a[501][501], c[501][501];

void dijkstra()
{
    c[1][1] = a[1][1];
    priority_queue<t3, vector<t3>, greater<t3>> q;
    q.push({c[1][1], {1, 1}});
    while(q.size())
    {
        int i = q.top().second.first;
        int j = q.top().second.second;
        q.pop();
        for(int k = 0; k < 4; ++k)
        {
            int i1 = i+di[k];
            int j1 = j+dj[k];
            if(i1 < 1 || i1 > n || j1 < 1 || j1 > m) continue;
            if(c[i1][j1] > c[i][j]+a[i1][j1])
            {
                c[i1][j1] = c[i][j]+a[i1][j1];
                q.push({c[i1][j1], {i1, j1}});
            }
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= m; j++){
        		cin >> a[i][j];
        		c[i][j] = 1e9;
			}
		}

        dijkstra();
        cout<<c[n][m]<<"\n";
    }
}
