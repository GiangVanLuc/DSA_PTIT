#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k ; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		int ok = 0;
		for(int i = 0; i < n; i++){
			int l = i + 1, r = n -1;
			while(l < r){
				if(a[l] + a[r] + a[i] == k){
					ok = 1;
					break;
				}
				else if(a[l] + a[r] + a[i] < k){
					l++;
				}
				else{
					r--;
				}
			}
			if(ok){
				break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout <<"NO" << endl;
		
	}
}
