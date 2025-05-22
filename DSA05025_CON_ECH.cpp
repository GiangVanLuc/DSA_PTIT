#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<long long> F(n + 5, 0);
		F[1] = 1; F[2] = 2; F[3] = 4;
		for(int i = 4; i <= n; i++){
			F[i] = F[i-1] + F[i-2] + F[i-3];
		}
		cout << F[n] << endl;
	}
}
