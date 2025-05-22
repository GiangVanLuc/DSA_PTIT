#include <bits/stdc++.h>

using namespace std;
vector<int> ke[1001];
int n, m;
int color[1001];
// mau 1: xanh
// mau 2 : do
int DFS(int u,int par){
	color[u] = 3 - color[par];
	for(int v: ke[u]){
		if(color[v] == 0){
			if(!DFS(v,u)) return false;
		}
		else if(color[v] == color[u]){
			return false;
		}
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(color, false, sizeof(color));
		memset(ke,false,sizeof(ke));
		cin >> n >> m;
		for(int i =0 ; i < m; i++){
			int x, y; 
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		bool ok = true;
		color[0] = 2;
		for(int i = 1; i <= n; i++){
			if(color[i] == 0){
				if(!DFS(i, 0)){
					ok = false;
				}
			}
		}
		if(ok){
			cout << "YES\n";
		}
		else cout <<"NO\n";
		
	}
}
