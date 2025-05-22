#include <bits/stdc++.h>

using namespace std;
int a[1000][1000];
bool check[1000];

void DFS(int u,int n){
	check[u] = true;
	for(int v = 1; v <= n; v++){
		if(a[u][v] && check[v] == false){
			DFS(v,n);
		}
	}
}
int examine(int n){
	for(int i = 1; i <= n; i++){
		if(check[i] == false) return 1;
	}
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int V,E;
		cin >> V >> E;
		memset(a,false,sizeof(a));
		while(E--){
			int u, v;
			cin >> u >> v;
			a[u][v] = 1; a[v][u] = 1;
		}
		for(int u = 1; u < V; u++){
			for(int v = u + 1; v <= V; v++){
				if(a[u][v]){
					memset(check,false,sizeof(check));
					a[u][v] = 0; a[v][u] = 0;
					DFS(1,V);
					if(examine(V)){
						cout << u <<" "<< v <<" ";
					}
					a[u][v] = 1; a[v][u] = 1;
				}
			}
		}
		cout << endl;
	}
}
