#include <bits/stdc++.h>

using namespace std;
char X[100];
int used[200];
string s;
void Try(int i){
	for(char j = s[0] ; j <= s[s.size()-1]; j++){
		if(used[j] == false){
			X[i] = j;
			used[j] = true;
			if(i == s.size() - 1){
				for(int i = 0; i <= s.size()-1;i++){
					cout << X[i];
				}
				cout <<" ";
			}
			else Try(i+1);
			used[j] = false;
		}
	}
}
int main(){
	int t; cin >> t  ;
	while(t--){
		cin >> s;
		Try(0);
		cout << endl;
	}
}
