#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,m; 
		cin >> n >> m;
		map<int,int> mp;
		int a[n],b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 0; i <m ;i++){
			cin >> b[i];
			mp[b[i]]++;
		}
		for(auto x: mp){
			if(x.second > 0){
				cout << x.first <<" ";
			}
		}
		cout << endl;
		int check = 0;
		for(auto x: mp){
			if(x.second == 2){
				cout << x.first <<" ";
				check = 1;
			}
		}
		if(check) cout << endl;
	}
}
