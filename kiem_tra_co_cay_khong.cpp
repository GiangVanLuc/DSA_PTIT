#include <bits/stdc++.h>

using namespace std;

const int maxn = 1001;
int n, m;
vector<int> adj[maxn];
bool visited[maxn];

void nhap(){
	memset(adj,false, sizeof(adj));
	cin >> n;
	for(int i =0 ;i < n-1; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false, sizeof(visited));
	
}

bool dfs(int u, int par){
	visited[u] = true;
	for(int v: adj[u]){
		if(!visited[v]){
			if(dfs(v,u)) return true;
		}
		else if (v != par) return true;
	}
	return false; // khong co chu trinh
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		if(dfs(1,-1)){
			cout << "NO" << endl;
		}
		else{
			// kiem tra co lien thong khong
			bool ok = true;
			for(int i =1; i <= n; i++){
				if(!visited[i]){
					ok = false;
				}
			}
			if(ok) cout <<"YES" << endl;
			else cout <<"NO" << endl;
		}
	}
}
