#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m, n , p;
		cin >> n >> m >> p;
		string x, y, z;
		cin >> x >> y >> z;
		int dp[n + 1][m + 1][p + 1];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				for(int k = 1; k <= p; k++){
					dp[i][j][k] = max({dp[i-1][j][k], dp[i][j-1][k],dp[i][j][k-1]});
					if(x[i - 1] == y[j - 1] && y[j-1] == z[k - 1]){
						dp[i][j][k] = max(dp[i][j][k], dp[i-1][j-1][k-1] + 1);
					}
				}
			}
		}
		cout << dp[n][m][p] << endl;
	}
}
