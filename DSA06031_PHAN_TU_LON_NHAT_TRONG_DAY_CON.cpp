#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n - k + 1; i++){
			cout << *max_element(a+i,a+i+k) <<" ";
		}
		cout << endl;
	}
}
