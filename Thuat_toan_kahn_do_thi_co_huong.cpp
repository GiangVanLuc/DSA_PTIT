#include <bits/stdc++.h>

using namespace std;
// thuat toan topological sort
// DFS
// BFS (kahn) - Xoa dan dinh
int n,m;
vector<int> adj[1001];
bool visited[1001];
int indegree[1001];
vector<int> topo;

void inp(){
	cin >> n >> m;
	for(int i = 0;i < m; i++){
		int x,y; cin >> x >> y;
		adj[x].push_back(y);
		indegree[y]++;
	}
	memset(visited, false, sizeof(visited));
}
void dfs(int u){
	visited[u] = true;
	for(int v: adj[i]){
		if(!visited[v]){
			dfs(v);
		}
	}
	topo.push_back(u) // u da duyet xong
}
void kahn(){
	queue<int> q;
	for(int i = 1; i <= n; i++){
		if(indegree[i] == 0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u = q.front();
		q.pop();
		cout << u << " ";
		for(int v: adj[u]){
			// xoa dinh u khoi do thi
			indegree[v]--;
			if(indegree[v] == 0) q.push(v);
		}
	}
}
int main(){
	inp();
	kahn();
	
}
