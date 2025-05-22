#include <bits/stdc++.h>

using namespace std;

// bien doi hau to ve trung to
int calculate(int x, int y, char o){
	if(o == '+'){
		return x + y;
	}
	else if(o == '-'){
		return x - y;
	}
	else if(o == '*'){
		return x * y;
	}
	else if(o == '/'){
		return x / y;
	}
}
void tc(){
	string s; cin >> s;
	stack<int> st;
	
	for(int i = s.size() - 1; i >= 0; i--){
		if(isdigit(s[i])){
			// day ki tu vao trong stack
			st.push(s[i] - '0');
		}
		else{
			// lay ra 2 phan tu trong dinh stack
			int o1 = st.top(); st.pop();
			int o2 = st.top(); st.pop();
			// ap dung toan tu s[i] voi 2 toan hang o1 o2
			int res = calculate(o1, o2, s[i]);
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
