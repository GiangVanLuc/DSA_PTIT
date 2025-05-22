#include <bits/stdc++.h>

using namespace std;
int a[1001][1001];
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		memset(a,false,sizeof(a));
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			a[x][y] = a[y][x] = 1;
		}
		int dem = 0;
		for(int i = 1; i <= n; i++){
			int sum = 0;
			for(int j =1 ; j <= n; j++){
				sum += a[i][j];
			}
			if(sum % 2 == 1){
				++dem;
			}
		}
		if(dem == 0){
			cout << 2 << endl;
		}
		else if (dem == 2){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}
}
