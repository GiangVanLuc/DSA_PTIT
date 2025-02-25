#include <bits/stdc++.h>

using namespace std;
// sinh nhi phan
// sinh to hop chap k cua n
// sinh hoan vi
// sinh phan hoach

int n;
int a[100];
bool ok = 1;
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
int check(int a[]){
	int l = 1 , r = n;
	while(l <= r){
		if(a[l] != a[r]){
			return 0;
		}
		l++; r--;
	}
	return 1;
}
void sinh_ke_tiep(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i] = 1;
	}
}
int main(){
	cin >> n;
	ktao();
	while(ok){
		if(check(a)){
			for(int i = 1; i <= n; i++){
				cout << a[i] <<" ";
			}
			cout << endl;
		}
		sinh_ke_tiep();
	}
}
