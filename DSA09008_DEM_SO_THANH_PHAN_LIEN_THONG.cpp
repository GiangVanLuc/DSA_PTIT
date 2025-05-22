#include <bits/stdc++.h>

using namespace std;
bool check[1001];
int v,e;
vector<int> ke[1001];
void DFS(int u){
	stack<int> st;
	st.push(u);
	check[u] = false;
	while(!st.empty()){
		int s = st.top();
		st.pop();
		for(int t: ke[s]){
			if(check[t] == true){
				check[t] = false;
				st.push(s);
				st.push(t);
				break;
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
		memset(check,true,sizeof(check));
		for(int i = 1; i <= v; i++){
			if(check[i]){
				++dem;
				DFS(i);
			}
		}
		cout << dem << endl;
	}
}
