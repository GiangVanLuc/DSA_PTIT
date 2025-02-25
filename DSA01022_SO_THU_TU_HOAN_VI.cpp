#include <bits/stdc++.h>

using namespace std;
int n, ok,a[1005];

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i+1]){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}

int check(int b[]){
	for(int i = 1; i <= n; i++){
		if(a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		int b[1005];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		ktao();
		ok = 1;
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
