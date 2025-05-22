#include <bits/stdc++.h>

using namespace std;
int n, k;
int a[15][15];
int ok = 1;
vector<string> v;
void Try(int i, int j, string s){
	if(i == n && j == n){
		cout << s << " ";
		ok = 1;
		return;
	}
	if(i + 1 <= n && a[i+1][j]){
		Try(i+1, j, s + "D");
	}
	if(j + 1 <= n && a[i][j + 1]){
		Try(i, j + 1, s + "R");
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n; 
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		ok = 0;
		Try(1,1,"");
		// luu y truong hop xuat phat ban dau la 0
		if(ok == 0 || a[1][1] == 0){
			cout << "-1"<< endl;
		}
		else ok = 0;
		cout << endl;
	}
}
