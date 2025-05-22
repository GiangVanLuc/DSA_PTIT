#include <bits/stdc++.h>

using namespace std;
int bfs(int n){
	queue<pair<int,int>> q;
	q.push({n, 0});
	set<int> se;
	se.insert(n);
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		q.pop();
		if(tmp.first == 1){
			return tmp.second;
		}
		for(int i = 2; i <= sqrt(tmp.first); i++){
			if(tmp.first % i == 0){
				int m = max(i, tmp.first / i);
				if(!se.count(m)){
					q.push({m, tmp.second + 1});
					se.insert(m);
				}
			}
		}
		if(!se.count(tmp.first - 1)){
			q.push({tmp.first - 1, tmp.second + 1});
			se.insert(tmp.first - 1);
		}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << bfs(n) << endl;
	}
}
