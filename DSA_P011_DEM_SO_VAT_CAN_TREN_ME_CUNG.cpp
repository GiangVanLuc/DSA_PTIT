#include <bits/stdc++.h>

using namespace std;
vector<string> v;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int n,m; 

void loang(int i,int j){
	v[i][j] = '.';
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && v[i1][j1] == '#'){
			loang(i1,j1);
		}
	}
}
int main(){
	cin >> n >> m;
	v.resize(n);
	for(string &x: v) cin >> x;
	int cnt = 0;
	for(int i = 0; i < n;i++){
		for(int j = 0; j < m; j++){
			if(v[i][j] == '#'){
				cnt++;
				loang(i,j);
			}
		}
	}
	cout << cnt << endl;
		
}
