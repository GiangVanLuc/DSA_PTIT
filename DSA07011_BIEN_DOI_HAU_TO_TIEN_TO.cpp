#include <bits/stdc++.h>

using namespace std;

// bien doi hau to ve tien to
void tc(){
	string s; cin >> s;
	stack<string> st;
	for(int i = 0; i < s.size(); i++){
		if(isalpha(s[i])){
			// day ki tu vao trong stack
			st.push(string(1, s[i]));
		}
		else{
			// lay ra 2 phan tu trong dinh stack
			string operand1 = st.top(); st.pop();
			string operand2 = st.top(); st.pop();
			string res = s[i] + operand2 + operand1;
			st.push(res);
		}
	}
	cout << st.top() << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		tc();
	}
}
