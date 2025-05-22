#include <bits/stdc++.h>

using namespace std;
int n, a[100][100];
string s = "";
int check = 0;
void Try(int i, int j){
	if( i == n && j == n){
		cout << s <<" ";
		check = 1;
	}
	// gan nuoc di tiep theo khi dang o (i,j)
	if(i+1 <= n && a[i+1][j] == 1){
		s+="D";
		a[i+1][j] = 0; // danh dau da di qua o nay roi
		Try(i+1,j);
		s.pop_back(); // xoa nuoc di cuoi cung
		a[i+1][j] = 1;
	}
	if( j + 1 <= n && a[i][j+1] == 1){
		s+="R";
		a[i][j+1] = 0;
		Try(i,j+1);
		s.pop_back();
		a[i][j+1] = 1;
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
		// luu y truong hop xuat phat tu diem la so 0
		if(a[1][1] == 0) cout << -1;
		else{
			Try(1,1);
			if(check == 0) cout << -1;
			else check = 0;
		}
		cout << endl;
	}
}
