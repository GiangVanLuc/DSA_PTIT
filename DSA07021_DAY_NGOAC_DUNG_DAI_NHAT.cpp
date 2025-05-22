#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int cnt = 0;
		stack<char> st;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '('){
				st.push(s[i]);
			}
			else{
				if(!st.empty()){
					st.pop();
					cnt+=2;
				}
			}
		}
		cout << cnt << endl;
	}
}
