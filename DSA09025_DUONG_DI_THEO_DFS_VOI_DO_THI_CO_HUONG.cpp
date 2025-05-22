#include <bits/stdc++.h>

using namespace std;
int v, e, s, t;
vector<int> ke[1001];
bool check[1001];
int parent[1001];
void DFS(int u){
	check[u] = true;
	for(int v: ke[u]){
		if(!check[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}
void input(){
	memset(ke,false,sizeof(ke));
	memset(parent,false,sizeof(parent));
	cin >> v >> e >> s >> t;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		// ke[y].push_back(x);
	}
	for(int i = 1; i <= v; i++) sort(ke[i].begin(),ke[i].end());
	memset(check,false,sizeof(check));
}
int main(){
	int Test; cin >> Test;
	while(Test--){
		input();
		DFS(s);
		if(!check[t]){
			cout << "-1\n";
		}
		else{
			vector<int> path;
			while(t != s){
				path.push_back(t);
				t = parent[t];
			}
			path.push_back(s);
			reverse(path.begin(),path.end());
			for(int x: path) cout << x <<" ";
			cout << endl;
		}
	}
}
