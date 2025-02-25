#include <bits/stdc++.h>

using namespace std;
char a[4][4];

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int k, m, n;
set<string> dict;
bool visted[4][4];
vector<string> res;
string s;
int ok = 0 ;

void inp(){
	cin >> k >> n >> m;
	for(int i = 0; i < k; i++){
		string word; cin >> word;
		dict.insert(word);
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	memset(visted, 0, sizeof(visted));
}

void Try(int i, int j){
	s+=a[i][j];
	if(dict.count(s)){
		res.push_back(s);
		ok = 1;
	}
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && visted[i1][j1] == 0){
			visted[i1][j1] = 1; // o nay da duoc tham
			Try(i1,j1);
			visted[i1][j1] = 0;
		}
	}
	s.pop_back();
}
int main(){
	int t; cin >> t;
	while(t--){
		dict.clear();
		res.clear();
		inp();
		ok = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				Try(i,j);
			}
		}
		if(!ok) cout << -1 ;
		else{
			for(string x: res){
				cout << x <<" ";
			}
		}
		cout << endl;
	}
