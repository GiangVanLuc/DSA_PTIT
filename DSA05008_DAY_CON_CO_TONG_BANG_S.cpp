#include<bits/stdc++.h>
using namespace std;


void tc(){
	int n, s; cin >> n >> s;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<bool> dp(s + 1, false); // 
	dp[0] = true;
	for(int i = 0 ; i < n; i++){
		for(int j = s; j >= a[i]; j--){
			if(dp[j - a[i]]){
				dp[j] = true;
			}
		}
	}
	if(dp[s]) cout << "YES" << endl;
	else cout <<"NO" << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		tc();
	}
}

