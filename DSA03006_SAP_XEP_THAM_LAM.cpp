#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x: a) cin >> x;
		vector<int> b(a,a+n);
		sort(a,a+n);
		bool ok = true;
		for(int i = 0;i < n; i++){
			if(a[i] != b[i] && b[i] != a[n-i-1]){
				cout <<"No\n"; ok = false;
				break;
			}
		}
		if(ok) cout <<"Yes\n";
	}
}
