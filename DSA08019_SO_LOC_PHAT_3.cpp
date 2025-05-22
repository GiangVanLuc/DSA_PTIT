#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> res;

void init(int n){
	queue<string> q;
	q.push("6");
	q.push("8");
	while(1){
		string top = q.front(); q.pop();
		if(top.size() == n + 1) break;
		res.push_back(top);
		q.push(top + "6");
		q.push(top + "8");
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		init(n);
		cout << res.size() <<"\n";
		for(int i = res.size() - 1; i >= 0; i--){
			cout << res[i] << " ";
		}
		cout << endl;
		res.clear();
	}
}
