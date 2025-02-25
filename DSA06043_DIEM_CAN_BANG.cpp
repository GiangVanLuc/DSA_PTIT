#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 1; i < n; i++){
			a[i]+=a[i-1];
		}
		for(int i = 0; i < n; i++) cout << a[i] <<" ";
		cout << endl;
		int i;
		for( i = 1; i < n; i++){
			if(a[n-1] - a[i] == a[i-1] ) break;
		}
		if(i == n) cout << - 1 << endl;
		else cout << i+1 << endl;
	}
}
