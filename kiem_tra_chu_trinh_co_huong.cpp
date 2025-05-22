#include <bits/stdc++.h>

using namespace std;
int n,m;
bool visited[1001];
vector<int> adj[1001];
int parent[1001];
int color[1001];
void inp(){
	memset(adj,false,sizeof(adj));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		//adj[y].push_back(x);
	}
	memset(color, 0, sizeof(color));
	memset(visited, false, sizeof(visited));
	memset(parent,false,sizeof(parent));
	
}
// 0 : trang, 1: xam , 2: den
bool DFS(int u ){
	color[u] = 1;
	for(int v: adj[u]){
		if(color[v] == 0 ){
			if(DFS(v)) return true;
			// return DFS(v,u) : sai
		}
		// diem v da duoc tham, nhung ma v khong la cha truc tiep cua u
		else if(color[v] == 1){
			return true;
		}
	}
	color[u] = 2;
	return false;
}

bool BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v=  q.front();
		q.pop();
		for(int x: adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
				parent[x] = v;
			}
			else if(x != parent[v]){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		inp();
		bool ok = false;
		for(int i =1; i <= n; i++){
			if(!color[i] && DFS(i)){
				ok =  true; break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
