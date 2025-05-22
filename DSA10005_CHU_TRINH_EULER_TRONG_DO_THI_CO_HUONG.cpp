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
			a[x][y] = 1;
		}
		int ok = 0;
		for(int i = 1; i <= n; i++){
			int sum1 = 0;
			int sum2 = 0;
			for(int j =1 ; j <= n; j++){
				sum1 += a[i][j];
				sum2 += a[j][i];
			}
			if(sum1 != sum2){
				ok = 1;
				break;
			}
		}
		if(ok){
			cout << 0 << endl;
		}
		else cout << 1 << endl;
	}
}
