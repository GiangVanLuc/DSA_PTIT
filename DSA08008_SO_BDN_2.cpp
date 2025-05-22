#include <bits/stdc++.h>
using namespace std;
vector<long long> res;
void init(long long n){
	queue<long long> q;
	q.push(1);
	while(!q.empty()){
		long long top = q.front(); q.pop();
		if(top % n == 0){
			res.push_back(top);
			break;
		}
		q.push(top*10); // them chu so 0
		q.push(top*10 + 1); // them chu so 1
	}
	cout << res[0] << '\n';
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		init(n);
		res.clear();
	}
}
