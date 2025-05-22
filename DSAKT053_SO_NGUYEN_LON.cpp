#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s, t;
		cin >> s >> t;
		int m = s.size();
		int n = t.size(); 
		vector<vector<int>> dp(m + 1, vector<int> (n + 1, 0)); // do dai nhat cua xau con co do dai i cua sau s va j do dai cua sau t
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				if(s[i - 1] == t[j - 1]){
					dp[i][j] = dp[i-1][j-1] + 1;
				}
				else{
					dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
				}
			}
		}
		cout << dp[m][n] << endl;
	}
}
