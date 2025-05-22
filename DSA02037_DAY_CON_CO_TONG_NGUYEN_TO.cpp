#include <bits/stdc++.h>

using namespace std;
int n; 
int a[16], X[16];
vector<vector<int>> v;
const int Max = 1000;
int prime[Max + 1];
void sang(){
	prime[0] = 1, prime[1] = 1;
	for(int i = 2; i <= sqrt(Max); i++){
		if(prime[i] == 0){
			for(int j = i*i; j <= Max; j+=i){
				prime[j] = 1;
			}
		}
	}
}
void Try(int i, int pre,int sum){
	if(i > n) return;
	for(int j = pre; j <= n; j++){
		X[i] = a[j];
		if(prime[sum + a[j]] == 0){
			vector<int> tmp(X + 1, X + i + 1);
			v.push_back(tmp);
		}
		Try(i + 1, j + 1, sum + a[j]);
	}
}
int main(){
	sang();
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Try(1, 1, 0);
		for(auto &x: v){
			sort(begin(x),end(x), greater<int>());
		}
		
		sort(begin(v), end(v));
		for(auto x: v){
			for(auto c : x){
				cout << c <<" ";
			}
			cout << endl;
		}
		v.clear();
		memset(a,false,sizeof(a));
	}
}
