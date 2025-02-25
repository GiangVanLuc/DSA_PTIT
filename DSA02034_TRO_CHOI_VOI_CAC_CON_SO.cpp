#include <bits/stdc++.h>

using namespace std;
int n;
int X[105];
int visted[105];

int check(){
	for(int k = 2;k <= n -1; k++){
		if(abs(X[k] - X[k-1]) == 1 || abs(X[k] - X[k+1]) == 1){
			return 0;
		}
	}
	return 1;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(visted[j] == false){
			X[i] = j;
			visted[j] = true;
			if(i == n){
				if(check()){
					for(int i = 1; i <= n; i++){
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
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	}
}
