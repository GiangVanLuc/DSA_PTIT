#include <bits/stdc++.h>

using namespace std;
bool check[1001];
int v,e;
vector<int> ke[1001];
void DFS(int u){
	check[u] = true;
	for(int v : ke[u]){
		if(!check[v]){
			DFS(v);
		}
	}
	
}

int main(){
	int t; cin >> t;
	while(t--){
		memset(ke,false,sizeof(ke));
		cin >> v >> e;
		while(e--){
			int x,y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int q; cin >> q;
		while(q--){
			int s, t; cin >> s >> t;
			DFS(s);
			if(check[t] == true){
				cout <<"YES" << endl;
			}
			else cout <<"NO" << endl;
			memset(check,false,sizeof(check));
		}
	}
}
