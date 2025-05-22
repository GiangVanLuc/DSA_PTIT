#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;

using ll = long long;

long long binary_exponentiation(ll a, ll b){
	ll res = 1;
	a %= mod;
	// xet tung bit cua b
	while(b != 0){
		if(b%2 == 1){
			res *= a;
			res %= mod;
		}
		a*=a, a %= mod;
		b /= 2;
	}
	return res;
}
int main(){
	long long a,b;
	while(1){
		cin >> a >> b;
		if(a == 0 && b == 0) return 0;
		cout << binary_exponentiation(a,b) << endl;
	}
}
