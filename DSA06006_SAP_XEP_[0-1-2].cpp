#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int cnt[3]={0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			cnt[a[i]]++;
		}
		for(int i = 0; i <= 2; i++){
			for(int j = 1; j <= cnt[i]; j++){
				cout << i <<" ";
			}
		}
		cout << endl;
	}
}
