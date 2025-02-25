#include <bits/stdc++.h>

using namespace std;
int a[100][100],n;
string s;
int ok = 0;
void inp(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <=n; j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j){
	if(i == n && j == n){
		cout << s << " ";
		ok = 1;
	}
	
	if(i+1 <= n && a[i+1][j]){
		s+="D";
		a[i+1][j] = 0;
		Try(i+1,j);
		a[i+1][j] = 1;
		s.pop_back();
	}
	if(j - 1 >= 1 && a[i][j-1]){
		s+="L";
		a[i][j-1] = 0;
		Try(i,j-1);
		a[i][j-1] = 1;
		s.pop_back();
	}
	if(j + 1  <= n && a[i][j+1]){
		s+="R";
		a[i][j+1] = 0;
		Try(i,j+1);
		a[i][j+1] = 1;
		s.pop_back();
	}
	if( i - 1 >= 1 && a[i-1][j]){
		s+="U";
		a[i-1][j] = 0;
		Try(i-1,j);
		a[i-1][j] = 1;
		s.pop_back();
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		inp();
		ok = 0;
		s="";
		if(a[1][1] && a[n][n]){
			a[1][1] = 0;
			Try(1,1);
		}
		if(!ok) cout << "-1\n";
		else cout << endl;
	}
}
