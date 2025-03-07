#include <bits/stdc++.h>

using namespace std;
int bn1(int a[],int l,int r,int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}
		else if(a[m] > x){
			r = m - 1;
		}
		else{
			l = m + 1;
		}
	} 
	return res;
}

int bn2(int a[],int l,int r,int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}
		else if(a[m] > x){
			r = m - 1;
		}
		else{
			l = m + 1;
		}
	} 
	return res;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int cnt = 0;
		for(int i = 0; i < n - 1; i++){
			int pos1 = bn1(a, i + 1, n, k - a[i]);
			int pos2 = bn2(a, i + 1, n, k - a[i]);
			if(pos1 != -1){
				cnt += pos2 - pos1 + 1;
			}
		}
		cout << cnt << endl;
	}
}
