#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n + 1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int sum[n + 1] = {0};
		for(int i = 1; i <= n; i++){
			sum[i] = a[i];
			for(int j = 1; j < i; j++){
				if(a[i] > a[j]){
					sum[i] = max(sum[i], sum[j] + a[i]);
				}
			}
		}
		cout << *max_element(sum + 1, sum + n + 1) << endl;
	}
}
