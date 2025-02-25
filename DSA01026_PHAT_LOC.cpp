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
		a[i] = 6;
	}
}

void sinh_ke_tiep(){
	int i = n;
	while(i >= 1 && a[i] == 8){
		a[i] = 6;
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i] = 8;
	}
}
int check(){
	if(n < 6) return 0;
	if(a[1] == 6 || a[n] == 8) return 0;
	for(int i = 1; i <= n-1; i++){
		if(a[i] == 8 && a[i+1] == 8) return 0;
	}
	for(int i = 1; i <= n-3;i++){
		if(a[i] == 6 && a[i+1] == 6 && a[i+2] == 6 && a[i+3] == 6) return 0;
	}
	return 1;
}
int main(){
	cin >> n;
	ktao();
	while(ok){
		if(check()){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << endl;
		}
		sinh_ke_tiep();
	}
}
