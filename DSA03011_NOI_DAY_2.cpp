#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		priority_queue<ll, vector<ll>, greater<ll>> q; // min_heap
		int n; cin >>n;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			q.push(x);
		}
		long long ans = 0;
		while(q.size() > 1){
			// chon 2 soi day co chieu dai nho nhat de noi
			ll x = q.top(); // soi day ngan nhat
			q.pop();
			ll y = q.top(); // soi day ngan nhat tiep theo
			q.pop();
			ans += x + y;
			ans %= mod;
			q.push((x + y)%mod);
		}
		cout << ans << endl;
	}
}
