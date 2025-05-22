#include <bits/stdc++.h>

using namespace std;
const int maxn = 1001;
int parent[maxn];
int sz[maxn];

int find(int u){
	if(u == parent[u]) return u;
	else return parent[u] = find(parent[u]);
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


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		for(int i = 1; i <= n; i++){
			parent[i] = i;
			sz[i] = 1;
		}
		bool ok = false;
		while(m--){
			int x,y;
			cin >> x >> y;
			if(!Union(x,y)){
				ok = true;
				while(m--){
					cin >> x >> y;
				}
				break;
			}
		}
		if(ok){
			cout << "YES\n";
		}
		else{
			cout <<"NO\n";
		}
	}
}
