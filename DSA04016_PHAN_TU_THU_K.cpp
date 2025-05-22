#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;
		vector<int> a(n),b(m);
		vector<int> c;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		int i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] < b[j]){
				c.push_back(a[i]);
				i++;
			}
			else if(a[i] == b[j]){
				c.push_back(a[i]);
				c.push_back(b[j]);
				i++;
				j++;
			}
			else{
				c.push_back(b[j]);
				j++;
			}
		}
		while(i < n){
			c.push_back(a[i]);
			i++;
		}
		while(j < m){
			c.push_back(b[j]);
			j++;
		}
		k--;
		cout << c[k] << endl;
	}
}
