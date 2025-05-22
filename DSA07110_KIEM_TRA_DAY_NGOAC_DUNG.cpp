#include <bits/stdc++.h>

using namespace std;
void solve(){
	string s; cin >> s;
	stack<char> st;
	bool ok = true;
	for(char c: s){
		if(c == '[' || c == '{' || c == '('){
			st.push(c);
		}
		else{
			if(!st.empty()){
				char tmp = st.top();
				if((c == ']' && tmp == '[') || (c == '}' && tmp == '{') || (c == ')' && tmp == '(')){
					st.pop();
				}
				else{
					ok = false;
				}
			}
			else{
				ok = false;
			}
		}
	}
	if(st.empty() && ok){
		cout << "YES" << endl;
	}
	else{
		cout << "NO\n";
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
