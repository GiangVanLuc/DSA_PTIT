#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> res;

void init(int n){
	queue<string> q;
	q.push("0");
	q.push("9");
	while(1){
		string top = q.front(); q.pop();
		ll tmp = stoll(top);
		if(tmp % n == 0 && tmp != 0){
			res.push_back(tmp);
			break;
		} 
		q.push(top + "0");
		q.push(top + "9");
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		init(n);
		cout << res[0] <<"\n";
		res.clear();
	}
}
