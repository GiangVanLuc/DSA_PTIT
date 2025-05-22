#include <bits/stdc++.h>

using namespace std;
const int maxn = 1001;
vector<int> adj[maxn];
int n, m , s;
bool visited[maxn];
int parent[maxn];
vector<pair<int,int>> tree;
void dfs(int u){
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v]){
			tree.push_back({u,v});
			dfs(v);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(visited, false, sizeof(visited));
		cin >> n >> m >> s;
		for(int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		dfs(s);
		if(tree.size() == n - 1){
			for(auto x: tree){
				cout << x.first <<" " <<x.second<<endl;
			}
		}
		else{
			cout << -1 << endl;
		}
		for(int i = 1; i <= n; i++) adj[i].clear();
		tree.clear();
	}
}
