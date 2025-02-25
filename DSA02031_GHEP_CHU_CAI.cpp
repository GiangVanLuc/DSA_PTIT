#include <bits/stdc++.h>

using namespace std;
char c;
char X[105];
int visted[260];
bool vowel(char c){
	return c == 'A' || c == 'E';
}
int check(){
	for(int i = 2; i <= c - 'A' ; i++){
		if(vowel(X[i]) && !vowel(X[i-1]) && !vowel(X[i+1])) return false;
	}
	return 1;
}
void Try(int i){
	for(int j = 'A'; j <= c; j++){
		if(visted[j] == false){
			X[i] = j;
			visted[j] = true;
			if(i == c - 'A' + 1){
				if(check()){
					for(int i = 1; i <= c - 'A' + 1; i++){
						cout << X[i];
					}
					cout << endl;
				}
			}
			else Try(i+1);
			visted[j] = false;
		}
	}
}
int main(){
	cin >> c;
	Try(1);
}
