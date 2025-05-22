
#include <bits/stdc++.h>

using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(n);
		for(int i = 0 ; i < n; i++){
			cin >> v[i];
		}
		vector<int> L(n, 1);
		for(int i = 0; i < n; i++){
			for(int j = 0 ; j < i; j++){
				if(v[j] <= v[i]){
					L[i] = max(L[i], L[j] + 1);
				}
			}
		}
		cout << n - *max_element(L.begin(), L.end()) << endl;
	}
}
