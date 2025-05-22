#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	deque<int> dq;
	while(n--){
		string tt; cin >> tt;
		if(tt == "PUSHFRONT"){
			int x; cin >> x;
			dq.push_front(x);
		}
		else if(tt == "PRINTFRONT"){
			if(!dq.empty()){
				cout << dq.front() << "\n";
			}
			else cout <<"NONE\n";
		}
		else if(tt == "POPFRONT"){
			if(!dq.empty()){
				dq.pop_front();
			}
		}
		else if(tt == "PUSHBACK"){
			int x; cin >> x;
			dq.push_back(x);
		}
		else if(tt == "PRINTBACK"){
			if(!dq.empty()){
				cout << dq.back() << "\n";
			}
			else cout <<"NONE\n";
		}
		else if(tt == "POPBACK"){
			if(!dq.empty()){
				dq.pop_back();
			}
		}
	}
}
