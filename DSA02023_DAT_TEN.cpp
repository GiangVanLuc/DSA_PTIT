#include <bits/stdc++.h>

using namespace std;
set<string> se;
int n,k;
int X[105];
vector<string> v;
void Try(int i){
	for(int j = X[i-1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			for(int i = 1; i <= k; i++){
				cout << v[X[i] - 1] <<" ";
			}
			cout << endl;
		}
		else Try(i+1);
	}
}
int main(){ 
	cin >> n >> k;
	for(int i= 1; i <= n; i++){
		string x; cin >> x;
		se.insert(x);
	}
	for(string x: se){
		v.push_back(x);
	}
	n = v.size();
	Try(1);
	
	
}
