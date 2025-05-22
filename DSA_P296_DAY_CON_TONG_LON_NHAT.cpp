#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] < 0){
			a[i] = 0;
		}
	}
	int F[n];
	F[0] = a[0];
	for(int i = 1; i < n; i++){
		F[i] = F[i - 1] + a[i];
	}
	while(q--){
		int l, r; cin >> l >> r;
		l--; r--;
		if(l == 0) cout << F[r] << endl;
		else cout << F[r] - F[l - 1] << endl;
	}
}
