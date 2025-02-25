#include <bits/stdc++.h>

using namespace std;
int maxn = 1e7+1;
bool prime[10000001];

void sang(){
	for(int i =0 ; i <= maxn;i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(maxn);i++){
		if(prime[i]){
			for(int j = i*i ; j <= maxn;j+=i){
				prime[j] = false;
			}
		}
	}
}

int tn(int n){
	int tmp = n;
	int lat = 0;
	while(n){
		lat = lat*10 + n%10;
		n/=10;
	}
	return lat == tmp;
}
int main(){
	sang();
	int t; cin >> t;
	while(t--){
		int a,b; cin >> a>> b;
		int cnt = 0;
		for(int i = a;i<=b;i++){
			if(prime[i] && tn(i)){
				cout << i << " ";
				cnt++;
				if(cnt == 10){
					cout << endl;
					cnt = 0;
				}
			}
		}
		cout << endl;
	}
}
