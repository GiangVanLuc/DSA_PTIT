#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		ll cnt = 0;
		for(int i = 0; i < n - 2; i++){
			int l = i + 1, r = n - 1;
			while(l < r){
				ll res = a[i] + a[l] + a[r];
				if(res < k){
					cnt+= r - l;
					++l;
				}
				else --r;
			}
		}
		cout << cnt << endl;
	}
}
