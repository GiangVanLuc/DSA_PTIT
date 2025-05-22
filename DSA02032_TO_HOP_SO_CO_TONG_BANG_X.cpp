#include <bits/stdc++.h>

using namespace std;
int n,k;
int a[100],X[100];
vector<string> v;
void Try(int i, int sum,int pos){
	for(int j = pos; j <= n; j++){
		if(sum + a[j] <= k){
			X[i] = a[j];
			if(sum + a[j] == k){
				string res = "{";
				for(int l = 1; l < i; l++){
					res += to_string(X[l]) + " ";
				}
				res +=to_string(X[i]) +  "}";
				v.push_back(res);
			}
			else Try(i + 1, sum + a[j], j );
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Try(1,0,1);
		if(!v.empty()){
			cout << v.size() << " ";
			for(auto x : v){
				cout << x <<" ";
			}
			cout << endl;
			v.clear();
		}
		else cout << - 1 << endl;
	}
}
