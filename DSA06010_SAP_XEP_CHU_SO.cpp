#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		vector<string> v(n);
		set<char> se;
		for(int i = 0; i < n; i++) cin >> v[i];
		for(int i = 0; i < n; i++){
			for(auto x: v[i]){
				se.insert(x);
			}
		}
		for(auto x: se) cout << x <<" ";
		cout << endl;
	}
}
