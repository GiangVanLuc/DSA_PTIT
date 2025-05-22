//#include <bits/stdc++.h>
//
//using namespace std;
//
//using ll = long long;
//const ll MOD = 1e9 + 7;
//long long binary_exponentiation(ll a, ll b){
//	ll res = 1;
//	a %= MOD;
//	// xet tung bit cua b
//	while(b != 0){
//		if(b%2 == 1){
//			res *= a;
//			res %= MOD;
//		}
//		a*=a, a %= MOD;
//		b /= 2;
//	}
//	return res;
//}
//ll nghichdao(ll n){
//	ll rev = 0;
//	while(n){
//		rev = rev * 10 + n % 10;
//		n /= 10;
//	}
//	return rev;
//}
//int main(){
//	int t; cin >> t;
//	ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//	while(t--){
//		long long n; cin >> n;
//		ll r = nghichdao(n);
//		cout << binary_exponentiation(n,r) << "\n";
//	}
//}



#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long poww(long long n, long long k) {
    if (k == 0) return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

long long rev(long long n) {
    long long res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

void testCase() {
    long long n; cin >> n;
    long long r = rev(n);
    cout << poww(n, r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
