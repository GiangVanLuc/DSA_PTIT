#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<int> ke[1001];
bool visited[1001];
bool check(){
	for(int i = 1; i <= n; i++){
		if(visited[i] == false){
			return true;
		}
	}
	return false;
}

void DFS(int u){
	visited[u] = true;
	for(int v: ke[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(ke,false,sizeof(ke));
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1; i <= n; i++){
			memset(visited, false, sizeof(visited));
			visited[i] = true;
			if(i == 1) DFS(2);
			else DFS(1);
			if(check()){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
