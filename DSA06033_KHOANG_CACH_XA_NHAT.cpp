#include <bits/stdc++.h>

using namespace std;
int binary_search(int i,int a[],int l,int r,int x){
	int res = INT_MAX;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] > x){
			res = m - i;
			l = m - i;
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int res = INT_MIN;
		int ok = 0;
		for(int i =0 ; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] < a[j]){
					ok = 1;
					int tmp = j - i;
					res = max(res,tmp);
				}
			}
		}
		if(ok) cout << res << endl;
		else cout << -1 << endl;
	}
}
