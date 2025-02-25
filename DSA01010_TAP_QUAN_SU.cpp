#include <bits/stdc++.h>

using namespace std;
int n, a[1005],k,ok;


void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
		
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		set<int> se;
		ok = 1;
		for(int i = 1; i <= k ; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		sinh();
		int cnt = 0;
		if(ok == 0){
			cout << k << endl;
		}
		else{
			for(int i = 1; i <= k; i++){
				if(!se.count(a[i])){
					++cnt;
				}
			}
			cout << cnt << endl;
		}
	}
}
