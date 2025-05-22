#include <bits/stdc++.h>
int n, m;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
int color[1001];

void inp(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(color, 0, sizeof(color));
}

// mau 1: Do
// mau 2: Xanh
bool dfs(int u, int par){
	color[u] = 3 - color[par];
	for(int v: adj[u]){
		if(color[v] == 0){
			if(!dfs(v, u)) return false; // khong phai doo thi 2 phia
		}
		else if(color[v] == color[u]) return false;
	}
	return true;
}
using namespace std;

int main(){
	inp();
	bool ok = true;
	color[0] = 2
	for(int i = 1; i <= n; i++){
		if(color[i] == 0){
			if(!dfs(i, 0)){
				ok = false;
			}
		}
	}
	cout << ok << endl;
}
