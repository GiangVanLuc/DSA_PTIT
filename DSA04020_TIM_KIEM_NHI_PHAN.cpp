#include <bits/stdc++.h>

using namespace std;
int check(int a[],int n, int k){
	int l = 0, r = n - 1;
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == k){
			return res = mid + 1;
		}
		else if(a[mid] < k){
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(check(a,n,k) == -1){
			cout << "NO" << endl;
		}
		else{
			cout << check(a,n,k) << endl; 
		}
	}
}
