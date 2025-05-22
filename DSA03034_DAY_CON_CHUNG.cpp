#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
	int t;cin >> t;
	while(t--){
		int n,m,p;
		cin >> n >> m >> p;
		vector<ll> a(n), b(m), c(p);
		for(int i =0 ; i < n;i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		for(int i = 0; i < p; i++) cin >> c[i];
		int i = 0, j = 0, k =0;
		vector<ll> res;
		while(i < n && j < m && k < p){
			if(a[i] == b[j] && a[i] == c[k]){
				res.push_back(a[i]);
				i++;++j;k++;
			}
			else if(a[i] < b[j]){
				++i;
			}
			else if(b[j] < c[k]){
				++j;
			}
			else ++k;
		}
		if(res.empty()){
			cout << "NO" << endl;
		}
		else{
			for(auto x: res){
				cout << x << " ";
			}
			cout << endl;
		}
	}
}

