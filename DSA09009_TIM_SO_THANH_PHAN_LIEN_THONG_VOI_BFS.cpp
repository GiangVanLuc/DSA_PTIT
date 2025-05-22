#include <bits/stdc++.h>

using namespace std;
bool check[1001];
int v,e;
vector<int> ke[1001];
void BFS(int u){
	// b1: tao 1 hang doi rong
	queue<int> qu;
	qu.push(u);
	check[u] = true;
	// b2: lap
	while(!qu.empty()){
		int q = qu.front(); // dinh o dau hang doi
		qu.pop(); // xoa dinh q khoi dau hang doi
		for(int x: ke[q]){
			if(check[x] == false){
				qu.push(x); // danh dau v vao trong hang doi
				check[x] = true;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(ke,false,sizeof(ke));
		cin >> v >> e;
		while(e--){
			int x,y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int dem = 0;
		memset(check,false,sizeof(check));
		for(int i = 1; i <= v; i++){
			if(!check[i]){
				++dem;
				BFS(i);
			}
		}
		cout << dem << endl;
	}
}
