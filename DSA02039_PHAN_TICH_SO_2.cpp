#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, X[100];
vector<vector<int>> res;

void Try(int sum,int i, int val){
	if(sum == n){
		vector<int> tmp(X+1,X+i);
		res.push_back(tmp);
	}
	for(int j = val; j >= 1; j--){
		if(sum + j <= n){
			X[i] = j;
			Try(sum + j, i + 1, j);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		res.clear();
		Try(0,1,n);
		cout << res.size() << endl;
		for(auto it : res){
			cout << "(";
			for(int i = 0; i < it.size(); i++){
				cout << it[i];
				if(i != it.size() - 1) cout << " ";
				else cout <<") ";
			}
			cout << endl;
		}
	}
}
