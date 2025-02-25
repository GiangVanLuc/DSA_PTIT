#include <bits/stdc++.h>

using namespace std;
int n, k, X[105];
set<string> se;
vector<string> v;
void Try(int i){
	for(int j = X[i-1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			for(int i = 1; i <= k; i++){
				cout << v[X[i] - 1]<<" ";
			}
			cout << endl;
		}
		else Try(i+1);
	}
}
int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		string tmp; cin >> tmp;
		se.insert(tmp);
	}
	for(string x: se){
		v.push_back(x);
	}
	n = v.size();
	Try(1);
}
