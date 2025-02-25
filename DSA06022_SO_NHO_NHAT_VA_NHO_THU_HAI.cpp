#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int val1 = INT_MAX, val2 = INT_MAX;
		for(int i = 0; i < n; i++){
			if(a[i] <= val1){
				val2 = val1;
				val1 = a[i];
			}
			if(a[i] < val2 && val1 < a[i]){
				val2 = a[i];
			}
		}
		if(val1 == val2 || val2 == INT_MAX) cout << -1 << endl;
		else cout << val1 << " " << val2 << endl;
	}
}
