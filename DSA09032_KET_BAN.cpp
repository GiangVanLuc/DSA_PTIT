#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vs;
int cnt, n, m;
int DFS(int u){
	cnt++;
	vs[u] = true;
	for(auto v: adj[u]){
		if(!vs[v]){
			DFS(v);
		}
	}
	return cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		adj.assign(n + 1, {});
		vs.assign(n + 1, false);
		
		for(int i = 1; i <= m; i++){
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		int max_n = 0;
		for(int i = 1; i <= n; i++){
			if(!vs[i]){
				cnt = 0;
				max_n = max(DFS(i), max_n);
			}
		}
		cout << max_n << endl;
	}
}
