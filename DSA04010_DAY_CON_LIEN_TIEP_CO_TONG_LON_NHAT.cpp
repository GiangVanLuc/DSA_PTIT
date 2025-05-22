#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int res = a[0];
		int cur_max = a[0];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			cur_max = max(cur_max + a[i], a[i]);
			res = max(cur_max, res);
		}
		cout << res << endl;
	}
}
