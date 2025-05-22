#include <bits/stdc++.h>
using namespace std;
void init(long long n){
	queue<long long> q;
	int cnt = 0;
	q.push(1);
	while(!q.empty()){
		long long top = q.front(); q.pop();
		if(top > n) break;
		cnt++;
		q.push(top*10); // them chu so 0
		q.push(top*10 + 1); // them chu so 1
	}
	cout << cnt << "\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		init(n);
	}
}
