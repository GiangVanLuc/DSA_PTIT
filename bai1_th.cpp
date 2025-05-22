#include <bits/stdc++.h>

using namespace std;
int a[101];
int n, ok;
int k;
string s;

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
	
}
int b[101];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ok = 1;
		set<int> se;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		sinh();
		if(ok == 0) cout << k;
		else{
			int cnt = 0;
			for(int i = 1; i <= k; i++){
				if(!se.count(a[i])){
					cnt++;
				}
			}
			cout << cnt;
		}
		cout << endl;
	}
}
