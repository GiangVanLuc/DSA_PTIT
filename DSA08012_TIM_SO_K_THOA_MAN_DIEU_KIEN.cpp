#include <bits/stdc++.h>

using namespace std;
vector<int> res;

void bfs(){
	queue<int> q;
	for(int i = 1; i <= 5; i++){
		q.push(i);
	}
	while(true){
		int t = q.front();
		res.push_back(t);
		if(t > 100000) break;
		q.pop();
		int used[6] = {0};
		int tmp = t;
		while(t){
			used[t%10] = 1;
			t/=10;
		}
		for(int i = 0; i <= 5; i++){
			if(!used[i]){
				q.push(tmp*10 + i);
			}
		}
	}
}
int main(){
	int t; cin >> t;
	bfs();
	while(t--){
		int l, r;
		int cnt = 0;
		cin >> l >> r;
		for(auto x : res){
			if(x >= l && x <= r){
				++cnt;
			}
		}
		cout << cnt <<"\n";
	}
}
