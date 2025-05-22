#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	ll res1 = 1ll * max(a[n-1]*a[n-2], a[0] * a[1]);
	ll res2 = 1ll * max(a[n-1] * a[n-2] * a[n-3], a[0] * a[1] * a[n-1]);
	cout << max(res1,res2) << endl;
}
