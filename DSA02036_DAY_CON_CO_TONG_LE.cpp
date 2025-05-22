#include <bits/stdc++.h>

using namespace std;
int n; 
int a[16], X[16];
vector<vector<int>> v;

void Try(int i, int pre,int sum){
	if(i > n) return;
	for(int j = pre; j <= n; j++){
		X[i] = a[j];
		if((sum + a[j]) %2 == 1){
			vector<int> tmp(X + 1, X + i + 1);
			v.push_back(tmp);
		}
		Try(i + 1, j + 1, sum + a[j]);
	}
}
int main(){
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
