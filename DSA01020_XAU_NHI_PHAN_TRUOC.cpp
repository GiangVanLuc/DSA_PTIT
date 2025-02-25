#include <bits/stdc++.h>

using namespace std;
int check(string s)
{
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1'){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;cin >> t;
	while(t--){
		string s; cin >> s;
		int i = s.size()- 1;
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
