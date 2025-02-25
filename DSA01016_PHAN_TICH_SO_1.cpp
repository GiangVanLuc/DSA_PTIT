#include <bits/stdc++.h>

using namespace std;
//sinh phan hoach: sinh cac bieu dien so tu nhien n duoi dang tong cua cac so tu nhien <= n

int n, a[100], ok ,dem;

void ktao(){
	dem = 1;
	a[1] =n;
}

// ham sinh ke tiep va kiem tra co phai cau hinh cuoi cung chua
void sinh(){
	int i = dem; // bat dau tu so hang cuoi cung
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0) ok = 0;
	else{
		a[i]--;
		int thieu = dem - i +1;
		dem = i;
		// thieu = a[i].q + r
		int q= thieu / a[i] , r =thieu % a[i];
		if(q != 0){
			for(int j = 1;j <= q;j++){
				a[++dem] = a[i];
			}
		}
		if(r != 0){
			a[++dem] = r;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok = 1;
		while(ok){
			cout <<"(";
			for(int i = 1;i<= dem;i++){
				cout <<a[i]; 
				if(i != dem) cout <<" ";
			}
			cout << ")";
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
