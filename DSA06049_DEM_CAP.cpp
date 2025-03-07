#include <bits/stdc++.h>

using namespace std;
int bn1(long long a[],int l,int r,int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] < x){
			res = m;
			r = m - 1;
		}
		else{
			r = m - 1;
		}
	} 
	return res;
}

int bn2(long long a[],int l,int r,int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] < x){
			res = m;
			l = m + 1;
		}
		else{
			r = m - 1;
		}
	} 
	return res;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		long long cnt = 0;
		for(int i = 0; i < n - 1; i++){
			int pos1 = bn1(a, i + 1, n - 1, k + a[i]);
			int pos2 = bn2(a, i + 1, n - 1, k + a[i]);
			if(pos1 != -1){
				cnt += pos2 - pos1 + 1;
			}
		}
		cout << cnt << endl;
	}
}
