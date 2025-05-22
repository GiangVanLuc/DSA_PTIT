#include<bits/stdc++.h>
using namespace std;
int n, m;
int parent[1001];

int find(int u){
	if(u == parent[u]) return u;
	else return find(parent[u]);
}

bool Union(int a,int b){
	a = find(a);
	b = find(b);
	if(a == b) return false; // thuoc cung 1 tap hop
	if(sz[a] < sz[b]) swap(a,b);
	parent[b] = a;
	sz[a] += sz[b];
	return true;
}

void ktao(){
	for(int i = 1; i <= n; i++) parent[i] = i;
}
int main(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		Union(x,y);
	}
	for(int i = 1; i <= n; i++){
		cout << find(i) << " ";
	}

}

