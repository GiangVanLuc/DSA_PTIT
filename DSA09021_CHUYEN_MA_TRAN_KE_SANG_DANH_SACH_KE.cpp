#include <bits/stdc++.h>

using namespace std;
int main(){
	int n; cin >> n;
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		int ok = 0;
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1){
				cout << j << " ";
				ok = 1;
			}
		}
		if(ok == 1){
			cout << endl;
		}
	}
	
}
