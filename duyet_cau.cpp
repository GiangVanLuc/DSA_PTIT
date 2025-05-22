#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m, disc[maxn], low[maxn], timer = 0;
vector<int> adj[maxn];
bool is_cut[maxn];
vector<pair<int,int>> cau;

void in(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(disc, 0 ,sizeof(disc));
	memset(low, 0 , sizeof(low));
	memset(is_cut, 0, sizeof(is_cut));
}

void dfs(int u, int par){
	low[u] = disc[u] = ++timer;
	for(int v: adj[u]){
		if(v == par) continue;
		if(!disc[v]){
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if( low[v] > disc[u]){
				cau.push_back({u,v});
			} 
		}
		else low[u] = min(low[u], disc[v]); // low[u] = min(low[u], low[v])
	}
}
int main(){
	in();
	for(int i = 1; i <= n; i++){
		 if(!disc[i]){
		 	dfs(i, -1);
		 }
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		ans += is_cut[i] = true;
	}
	cout << ans << endl;
}
