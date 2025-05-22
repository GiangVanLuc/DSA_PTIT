 #include <bits/stdc++.h>
using namespace std;
using ll = long long;
int prio(char c) {
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

ll tinhtoan(ll a, ll b, char c){
	if(c == '+') return a + b;
	else if(c == '-') return a - b;
	else if(c == '*') return a * b;
	else return a / b;
}

void testCase() {
    stack<char> st1;
    stack<ll> st2;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
    	if(isdigit(s[i])){
    		string res = string(1, s[i]);
    		while(i + 1 < s.size() && isdigit(s[i+1])){
    			i++;
    			res += s[i];
			}
			ll tmp = stoll(res);
			st2.push(tmp);
		}
		else if (s[i] == '(') st1.push(s[i]);
		else if(s[i] == ')'){
			while(!st1.empty() && st1.top() != '('){
				ll o1 = st2.top(); st2.pop();
				ll o2 = st2.top(); st2.pop();
				char dau = st1.top(); st1.pop();
				ll res = tinhtoan(o2, o1, dau);
				st2.push(res);
			}
			if(!st1.empty()) st1.pop();
		}
		else{
			while(!st1.empty() && prio(st1.top()) >= prio(s[i])){
				ll o1 = st2.top(); st2.pop();
				ll o2 = st2.top(); st2.pop();
				char dau = st1.top(); st1.pop();
				ll res = tinhtoan(o2, o1, dau);
				st2.push(res);
			}
			st1.push(s[i]);
		}
	}
	while (!st1.empty()) {
        ll o1 = st2.top(); st2.pop();
        ll o2 = st2.top(); st2.pop();
        char dau = st1.top(); st1.pop();
        st2.push(tinhtoan(o2, o1, dau));
    }
	cout << st2.top() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

// 2
// (A+(B+C)
// ((A*B)+C)
