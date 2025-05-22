#include <bits/stdc++.h>

using namespace std;
const int maxn = 100001;
int n, m, cnt = 0;
vector<int> adj[maxn];
int child[maxn];
bool visited[maxn];
vector<int> tplt;
void nhap(){
	cin >> n >> m;
	for(int i = 0 ; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void dfs(int u){
	cnt++;
	visited[u] = true;
	tplt.push_back(u);
	for(int v: adj[u]){
		if(!visited[v]) dfs(v);
	}
}

int ok;
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 1; i <= n; i++){
			adj[i].clear();
		}
		nhap();
		ok = 1;
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				cnt = 0;
				tplt.clear();
				dfs(i);
				for(int x: tplt){
					if(adj[x].size() != cnt - 1){
						cout << "NO\n";
						ok = 0;
						break;
					}
				}
				if(ok == 0){
					break;
				}
			}
		}
		if(ok == 1){
			cout << "YES\n";
		}
	}
}
