#include <bits/stdc++.h>

using namespace std;
bool check[1001];
int a[1001][1001];
void DFS(int u,int n){
	stack<int> st;
	st.push(u);
	cout << u << " ";
	check[u] = true;
	while(!st.empty()){
		int i = st.top();
		st.pop();
		for(int v = 1; v <= n; v++){
			if(a[i][v] && !check[v]){
				cout << v <<" ";
				st.push(i);
				st.push(v);
				check[v] = true;
				break;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(a,false,sizeof(a));
		memset(check,false,sizeof(check));
		int v, e, s;
		cin >> v >> e >> s;
		while(e--){
			int x,y;
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		DFS(s,v);
		cout << endl;
	}
}
