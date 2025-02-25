#include <bits/stdc++.h>

using namespace std;
int n, a[1005],k,ok;

void ktao(){
	for(int i = 1; i <= k ;i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
		
	}
}

int check(int b[]){
	for(int i = 1; i <= k; i++){
		if(b[i] != a[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		int b[1005];
		ok = 1;
		for(int i = 1; i <= k ; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		ktao();
		int cnt = 0;
		while(ok){
			cnt++;
			if(check(b)){
				break;
			}
			sinh();
		}
		cout << cnt << endl;
		
	}
}
