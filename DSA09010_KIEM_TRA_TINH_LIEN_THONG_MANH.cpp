#include <bits/stdc++.h>

using namespace std;
bool check[1001];
int v,e;
vector<int> ke[1001];
int DFS(int u){
	stack<int> st;
	int dem = 1;
	st.push(u);
	check[u] = false;
	while(!st.empty()){
		int s = st.top();
		st.pop();
		for(int t: ke[s]){
			if(check[t] == true){
				dem++;
				check[t] = false;
				st.push(s);
				st.push(t);
				break;
			}
		}
	}
	return dem;
}
bool kq(){
	for(int i = 1; i <= v; i++){
		if(DFS(i) != v){
			return false;
		}
		else{
			memset(check,true,sizeof(check));
		}
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(ke,false,sizeof(ke));
		cin >> v >> e;
		while(e--){
			int x,y; cin >> x >> y;
			ke[x].push_back(y);
		}
		memset(check,true,sizeof(check));
		if(kq()){
			cout <<"YES" << endl;
		}
		else{
			cout <<"NO" << endl;
		}
	}
}
