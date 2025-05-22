#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) ( x.begin(), x.end() )
#define endl '\n'
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n], b[n];
		for(auto &x: a) cin >> x;
		for(auto &y: b) cin >> y;
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		ll res = 0;
		for(int i = 0;i < n; i++){
			res += a[i]*b[i];
		}
		cout << res << endl;
	}
}

