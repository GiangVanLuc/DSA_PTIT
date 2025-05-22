#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int n , k, a[100],X[100];
int check = 0;
int res;
void Try(int i, int pos,ll sum){
	for(int j = pos; j <= n; j++){
		if(sum + a[j] > k) return;
		X[i] = a[j];
		if(sum + a[j] == k){
			int dem = 0;
			for(int l = 1; l <= i; l++){
				dem++;
			}
			if(res > dem){
				res = dem;
			}
		}
		else Try(i+1,j+1, sum + a[j]);
	}
}
int main(){
	res = INT_MAX;
	cin >> n >> k;
 	for(int i = 1; i <= n; i++) cin >> a[i];
 	sort(a+1,a+n+1);
 	Try(1,1,0);
 	if(res == INT_MAX){
 		cout << "-1\n";
	}
	else cout << res << endl;
 	
}
