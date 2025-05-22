#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int v,e;
		cin >> v >> e;
		vector<vector<int>> g(v + 1);
		while(e--){
			int x, y;
			cin >> x >> y;
			g[x].push_back(y);			
		}
		for(int i = 1; i <= v; i++){
			cout << i << ": ";
			for(auto x : g[i]){
				cout << x <<" ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
