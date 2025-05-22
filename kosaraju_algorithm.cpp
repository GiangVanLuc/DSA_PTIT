#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int maxn = 100001;

// kosaraju 2 * O(V + E)
// Tarjan O(V + E)


// Buoc 1: Goi DFS tren do thi ban dau, luu lai thu tu duyet cac dinh vao ngan xep
// Buoc 2: Lat nguoc do thi ban dau : Tranpose graph
// Buoc 3: In ra tplt manh, goi DFS trn do thi Tranpose graph

vector<int> adj[maxn], t_adj[maxn];
int n, m;
bool visited[maxn];
stack<int> st;

void nhap(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		t_adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void dfs1(int u){
	visited[u] = true;
	for(int v: adj[u]){
		if(!visited[v]) dfs1(v);
	}
	st.push(u);
}

void dfs2(int u){
	visited[u] = true;
	// cout << u <<" ";
	for(int v: t_adj[u]){
		if(!visited[v]) dfs2(v);
	}
}
int main(){
	nhap();
	for(int i = 1;i <= n; i++){
		if(!visited[i]){
			dfs1(i); 
		}
	}
	memset(visited, false, sizeof(visited));
	int scc = 0;
	while(!st.empty()){
		int top = st.top(); st.pop();
		if(!visited[top]){
			dfs2(top);
			++scc;
			cout << endl;
		}
	}
	if(scc = 1) cout << 1 << endl;
	else cout << 0 << endl;
}
