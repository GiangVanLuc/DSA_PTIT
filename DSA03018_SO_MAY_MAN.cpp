#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int i;
		int tmp;
		int ok = 1;
		for(i = n/7; i >= 0; i--){
			tmp = n - i*7;
			if(tmp %4 == 0){
				ok = 0;
				break;
			}
		}
		if(ok && n%4 != 0){
			cout << -1 << endl;
			continue;
		}
		for(int j = 1; j <= tmp/4;j++){
			cout << 4;
		}
		
		for(int j = 1; j <= i; j++) cout <<7;
		cout << endl;
	}
}
