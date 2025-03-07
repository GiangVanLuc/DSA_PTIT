#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int max_fre = 0, res = 0;
		for(auto x: mp){
			if(x.second > max_fre){
				max_fre = x.second;
				res = x.first;
			}
		}
		if(max_fre > n/2){
			cout << res << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
