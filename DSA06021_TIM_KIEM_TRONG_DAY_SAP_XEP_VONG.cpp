#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		map<int,int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]] = i + 1;
		}
		cout << mp[x] << endl;
	}
}
