#include <bits/stdc++.h>

using namespace std;
const int maxn = 100001;
int n, m, k;
vector<int> adj[maxn];
int child[maxn];
bool visited[maxn];
vector<int> pos;
int cnt[maxn];
void nhap(){
	cin >> k >> n >> m;
	for(int i = 0; i < k; i++){
		int x; cin >>x ;
		pos.push_back(x);
	}
	for(int i = 0 ; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
}

void dfs(int u){
	cnt[u]++;
	visited[u] = true;
	for(int v: adj[u]){
		if(!visited[v]) dfs(v);
	}
}

int ok;
int main(){
	nhap();
	for(int x: pos){
		memset(visited, false, sizeof(visited));
		dfs(x);
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		if(cnt[i] == k){
			ans++;
		}
	}
	cout << ans << endl;
}
