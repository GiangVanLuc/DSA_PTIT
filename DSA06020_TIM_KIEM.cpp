#include <bits/stdc++.h>

using namespace std;
int binary_Search(int a[],int n,int x){
	int l = 0, r = n - 1;
	int res = -1;
	while(l <= r){
		int mid = (l+r)/ 2;
		if(a[mid] == x) return res = 1;
		else if(a[mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	return res;
	
}
int main(){
	int t;cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << binary_Search(a,n,x) << endl;
	}
}
