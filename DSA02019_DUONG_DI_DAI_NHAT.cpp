#include <bits/stdc++.h>

using namespace std;
int a[100][100];
int res = 0;
int n,m;
void DFS(int u,int tmp){
	res = max(res,tmp);
	for(int v = 0; v < n; v++){
		if(a[u][v] == 1){
			a[u][v] = a[v][u] = 0;
			DFS(v,tmp + 1);
			a[u][v] = a[v][u] = 1;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		int tmp = m;
		memset(a,false,sizeof(a));
		res = 0;
		while(m--){
			int x, y; 
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		for(int i = 0; i < tmp; i++) DFS(i,0);
		cout << res << endl;
	}
}
