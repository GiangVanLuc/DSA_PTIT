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

int check(){
	if(a[1] != 1 || a[n] != 0) return 0;
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 1) dem++;
		else{
			dem = 0;
		}
		if(dem >= 2) return 0;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok = 1;
		while(ok){
			if(check()){
				for(int i = 1; i <= n; i++){
					if(a[i] == 1) cout <<"H";
					else cout <<"A";
				}
				cout << endl;
			}
			sinh_ke_tiep();
		}
	}
}
