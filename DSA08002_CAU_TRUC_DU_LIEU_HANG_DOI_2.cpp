#include <bits/stdc++.h>

using namespace std;

int main(){
	int q; cin >> q;
	queue<int> Q;
	string tt;
	while(q--){
		cin >> tt;
		if(tt == "PUSH"){
			int x; cin >> x;
			Q.push(x);
		}
		else if(tt == "POP"){
			if(!Q.empty()){
				Q.pop();
			}
		}
		else if(tt == "PRINTFRONT"){
			if(!Q.empty()){
				cout << Q.front() <<"\n";
			}
			else cout <<"NONE\n";
		}
	}
}
