#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		priority_queue<int, vector<int>, greater<int>> q; // min_heap
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
			q.push(x + y);
		}
		cout << ans << endl;
	}
}
