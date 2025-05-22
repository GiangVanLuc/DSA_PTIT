#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		string s; cin >> s;
		int i = s.size();
		while(i--){
			if(s[i] == '1'){
				s[i] = '0';
				break;
			}
			else{
				s[i] ='1';
			}
		}
		cout << s << endl;
	}
}
