#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void ql(ll tu, ll mau){
	if(mau % tu  == 0){
		cout << 1 << "/" << mau/tu << endl;
		return; 
	}
	ll x = mau/tu+1;
	cout << 1 <<"/" << x <<" + ";
	ll maumoi = mau * x;
	ll tumoi = tu * x - mau;
	ql(tumoi, maumoi);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll tu, mau; 
		cin >> tu >> mau;
		ql(tu,mau);
	}
}
