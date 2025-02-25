#include <bits/stdc++.h>


using namespace std;
const int maxn = 1e6;
int prime[maxn + 1];
void sang(){
	for(int i = 1; i <= maxn; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(maxn);i++){
		if(prime[i]){
			for(int j = i * i; j <= maxn; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	sang();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ok = 0;
		for(int i = 2; i <= n/2; i++){
			if(prime[i] == 1 && prime[n-i] == 1){
				cout << i <<" "<< n-i << endl;
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << -1 << endl;
	}
}
