#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n + 1);
		a[0] = 0;
		for(int i = 1; i <= n; i++) cin >> a[i];
		vector<int> sum(n + 1, 0);
		sum[1] = a[1];
		for(int i = 2; i <= n; i++){
			sum[i] = max(sum[i-1], sum[i-2] + a[i]);
		}
		cout << sum[n] << endl;
	}
}
