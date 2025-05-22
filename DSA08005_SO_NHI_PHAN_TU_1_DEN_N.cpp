#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> res;

void init(int n){
	queue<string> q;
	q.push("0");
	q.push("1");
	while(1){
		string top = q.front(); q.pop();
		if(top[0] != '0') res.push_back(top); 
		if(res.size() == n) break;
		q.push(top + "0");
		q.push(top + "1");
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		init(n);
		for(string x: res){
			cout << x << " ";
		}
		cout << endl;
		res.clear();
	}
}
