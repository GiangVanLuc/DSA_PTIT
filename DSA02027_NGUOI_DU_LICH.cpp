#include <bits/stdc++.h>

using namespace std;

using ll = long long;
int n, s, a[100], X[100], k, ok, res =0, toiuu = 1e9;
int c[100][100], cmin = 1e9+5;
bool visited[101];
void inp(){
	memset(visited,false, sizeof(visited));
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> c[i][j];
			if(c[i][j]){
				cmin = min(cmin,c[i][j]);
			}
		}
	}
}

void Try(int i){
	for(int j = 2; j <=n ; j++){
		if(!visited[j]){
			visited[j] = true;
			X[i] = j; // thanh pho lua chon di thu i la thanh pho j
			res += c[X[i]][X[i-1]];
			if(i == n){
				toiuu = min(toiuu, res + c[X[n]][1]);
			}
			else if(res + cmin *(n - i + 1) < toiuu){
				Try(i+1);
			}
			visited[j] = false;
			res -= c[X[i]][X[i-1]];
		}
	}
}
int main(){
	int t; t = 1;
	while(t--){
		inp();
		X[1] = 1;
		Try(2);
		cout << toiuu << endl;
	}
}
