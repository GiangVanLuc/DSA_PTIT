#include <bits/stdc++.h>

using namespace std;
int main(){
	int n; cin >> n;
	vector<vector<int>> g(n+1);
	cin.ignore();
	for(int i = 1 ; i <= n; i++){
		string s; getline(cin , s);
		stringstream ss(s);
		int x;
		while(ss >> x){
			if(i < x){
				g[i].push_back(x);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(auto x: g[i]){
			cout << i << " "<< x << endl;
		}
	}
}
