#include <bits/stdc++.h>

using namespace std;
int n,m;
bool visited[1001];
vector<int> adj[1001];
int parent[1001];
void inp(){
	memset(adj,false,sizeof(adj));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	memset(parent,false,sizeof(parent));
	
}
bool DFS(int u ,int par){
	visited[u] = true;
	for(int v: adj[u]){
		if(!visited[v]){
			if(DFS(v, u)) return true;
		}
		else if(v != par){
			return true;
		}
	}
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
			if(!visited[i] && DFS(i,0)){
				ok =  true; break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
