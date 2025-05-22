#include <bits/stdc++.h>

using namespace std;
int n;
int X[11];
bool check[11];
int examine(){
	for(int i = 1; i <= n -1; i++){
		if(abs(X[i] - X[i+1]) == 1){
			return false;
		}
	}
	return true;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(check[j] == false){
			X[i] = j;
			check[j] = true;
			if(i == n){
				if(examine()){
					for(int k = 1; k <= n; k++){
						cout << X[k];
					}
					cout << endl;
				}
			}
			else Try(i + 1);
			check[j] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(check, false, sizeof(false));
		cin >> n;
		Try(1);
	}
}
