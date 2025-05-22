#include <bits/stdc++.h>
using namespace std;

// LCS : longest common sequence
// dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) : truong hop s[i] != t[j]
// dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
int LCS(string s, string t) {
    int m = s.size();
    int n = t.size();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0)); // luu do dai xau con chung dai nhat co duoc boi cach lay i ki tu dau tien cua xau x va j ki tu dau tien cua y
    // F[n][m]: la dap an cua bai taon
    // co so QHD: F[i][0] = 0, F[0][j] = 0

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s[i-1] == t[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return dp[m][n];
}

int main(){
    int t; cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;
        cout << LCS(s, t) << endl;
    }
}

