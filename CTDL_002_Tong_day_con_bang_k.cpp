#include <bits/stdc++.h>

using namespace std;

int n, X[100], ok;
void ktao(){
	for(int i = 1; i <= n; i++){
		X[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && X[i] == 1){
		X[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		X[i] = 1;
	}
}
int check(int k,int a[]){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(X[i] == 1){
			sum+=a[i];
		}
	}
	return sum == k;
}
int main(){
	int k;
	cin >> n >> k;
	ktao();
	int a[n];
	for(int i = 1;i <= n; i++){
		cin >> a[i];
	}
	ok = 1;
	int cnt = 0;
	while(ok){
		if(check(k,a)){
			for(int i = 1; i <=n; i++){
				if(X[i] == 1){
					cout << a[i] <<" ";
				}
			}
			++cnt;
			cout << endl;
		}
		sinh();
	}
	cout << cnt << endl;
}
