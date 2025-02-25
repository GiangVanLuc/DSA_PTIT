#include <bits/stdc++.h>

using namespace std;
char c;
int k;
char X[1005];
void Try(int i){
	for(int j = X[i-1]; j <= c; j++){
		X[i] = j;
		if(i == k){
			for(int i = 1; i <= k; i++){
				cout << X[i];
			}
			cout << endl;
		}
		else Try(i+1);
	}
}
int main(){
	cin >> c >> k;
	X[0] = 'A';
	Try(1);	
}
