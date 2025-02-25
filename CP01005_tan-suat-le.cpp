#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<int> v(1000001,0);
		for(int i=0 ;i<n;i++){
			cin >> a[i];
			v[a[i]]++;
		}
		int ok = 0;
		for(int i =0 ;i <= n;i++){
			if(v[a[i]]%2!=0){
				ok = 1;
				cout << a[i] << endl;
				break;
			}
		}
		if(ok==0) cout << -1 << endl;
	}
}
