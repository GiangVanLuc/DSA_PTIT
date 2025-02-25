#include <bits/stdc++.h>

using namespace std;

// thuat toan chuyen ma nhi phan sang ma gray
// bit dau tien cua ma gray va ma nhi phan la giong nhau
// cac bit con lai o vi tri i cua ma gray co duoc bang cach XOR 2 bit thu i va thu i - 1 xau nhi phan
int n, ok , a[100];
void ktao(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}

void sinh(){
	int i = n ;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		ktao();
		while(ok){
			cout << a[1];
			for(int i = 2; i <= n; i++){
				int res = a[i] ^ a[i-1];
				cout << res ;
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
