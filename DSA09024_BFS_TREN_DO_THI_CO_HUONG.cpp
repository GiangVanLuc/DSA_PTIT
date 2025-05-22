#include <bits/stdc++.h>

using namespace std;
bool check[1001];
int a[1001][1001];
void BFS(int u,int n){
	queue<int> q;
	q.push(u);
	check[u] = true;
	while(!q.empty()){
		int i = q.front();
		q.pop();
		cout << i << " ";
		for(int v = 1; v <= n; v++){
			if(a[i][v] == 1 && check[v] == false){
				q.push(v);
				check[v] = true;
			}
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int v, e, u;
		cin >> v >> e >> u;
		memset(check,false,sizeof(check));
		memset(a,false, sizeof(a));
		while(e--){
			int x,y; cin >> x >> y;
			a[x][y] = 1;
		}
		BFS(u,v);
		cout << endl;
	}
}
