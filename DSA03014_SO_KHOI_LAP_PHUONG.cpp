#include <bits/stdc++.h>

using namespace std;
using ll = long long;
bool check(ll n){
	ll can = cbrt(n) + 0.5;
	return can * can * can == n;
}

ll res;
int X[100], n;
string s;

void ql(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n - 1){
			ll tmp = 0;
			for(int i = 0; i < n; i++){
				if(X[i]){
					tmp = tmp * 10 + (s[i] - '0');
				}
			}
			if(check(tmp) && tmp > res) res = tmp;
		}
		else ql(i + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		n = s.size();
		res = 0;
		ql(0);;
		if(res == 0) cout << "-1" << endl;
		else cout << res << endl;
	}
}
