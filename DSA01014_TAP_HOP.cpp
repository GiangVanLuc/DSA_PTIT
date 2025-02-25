#include <bits/stdc++.h>

using namespace std;
int n, k ,s, ok ,a[1005];
void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum +=a[i];
	}
	return sum == s;
}
int main(){
	while(cin >> n >> k >> s){
		if(n == 0 && k == 0 && s == 0) return 0;
		int cnt = 0;
		ktao();
		ok = 1;
		if(n < k) cout << cnt << endl;
		else{
			while(ok){
				if(check()){
					++cnt;
				}
				sinh();
			}
			cout << cnt << endl;
		}
	}
}
