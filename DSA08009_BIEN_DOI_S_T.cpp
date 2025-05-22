#include <bits/stdc++.h>

using namespace std;
vector<string> res;

int bfs(int s, int t){
	set<int> se;
	queue<pair<int,int>> q;
	q.push({s, 0}); // {gia tri cua s, so thao tac}
	while(!q.empty()){
		pair<int,int> top = q.front(); q.pop();
		if(top.first == t) return top.second;
		if(top.first - 1 == t || top.first * 2 == t) return top.second + 1;
		int x = top.first;
		if(x > 1 && !se.count(x - 1)){
			q.push({x - 1, top.second + 1});
			se.insert(x - 1); // da xet dinh x - 1
		}
		if(x < t && !se.count(x * 2)){
			q.push({x*2, top.second + 1});
			se.insert(x * 2);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int s, T; cin >> s >> T;
		cout << bfs(s,T) << "\n";
	}
}
