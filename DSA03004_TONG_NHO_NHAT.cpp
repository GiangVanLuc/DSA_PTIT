#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		ll x =0, y = 0;
		sort(a,a+n);
		for(int i = 0; i < n; i+=2){
			x = x * 10 + a[i];
		}
		for(int i = 1; i < n; i+=2){
			y = y * 10 + a[i];
		}
		cout << x + y << endl;
	}
}
