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
		vector<int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		ll sum = 1e9, res = 1e9;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				int tmp = v[i] + v[j];
				if(abs(tmp) < sum){
					sum = abs(tmp);
					res = tmp;
				}
			}
		}
		cout << res << endl;
	}
}

