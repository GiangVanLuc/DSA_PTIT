#include <bits/stdc++.h>

using namespace std;
// sinh nhi phan
// sinh to hop chap k cua n
// sinh hoan vi
// sinh phan hoach

int n; // do dai cua xau nhi phan
int a[100];
bool ok = 1; // bien check xem co phai cau hinh cuoi cung khong
// khoi tao xau nhi phan toan 0 co do dai n
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
// kiem tra co phai xau thuan nghich hay khong
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

// function sinh ra cau hinh tiep theo
void sinh_ke_tiep(){
	// Buoc 1: duyet tu cuoi
	int i = n;
	// Buoc 2: tim gia tri 0 dau tien duyet tu cuoi
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){ // cau hinh cuoi cung
		ok = 0;
	}
	else{
		a[i] = 1; // 00111 -> 01000
	}
}
int main(){
	cin >> n;
	ktao(); // ham khoi tao
	while(ok){
		if(check(a)){
			// in ra cau hinh thoa man
			for(int i = 1; i <= n; i++){
				cout << a[i] <<" ";
			}
			cout << endl;
		}
		sinh_ke_tiep(); // ham sinh ra cau hinh ke tiep
	}
}
