#include <bits/stdc++.h>

using namespace std;
int n,k;
int a[16], X[16];
void Try(int i){
	for(int j = X[i-1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			for(int l = 1; l <= k; l++){
					cout << a[X[l]] <<" ";
			}
			cout << endl;
		}
		else Try(i+1);
 	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		Try(1);
	}
}
