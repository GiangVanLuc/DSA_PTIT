#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
ll n, len;

// tim ki tu o vi tri thu n trong xau co do dai k
char timkiem(ll n,ll k){
	if(n <= s.size()) return s[n-1];
	// tim o ben trai
	if(n <= k / 2){
		return timkiem(n, k / 2);
		}
	}
	else{
		ll tmp = n - k / 2;
		if(tmp == 1) return timkiem(k/2, k/2);
		else return timkiem(tmp - 1, k / 2);
	}
}
void nhap(){
	cin >> s >> n;
	len = s.size();
	while(len < n) len*=2;
	cout << timkiem(n,len) << endl;
	
}

int main(){
	int t;cin >> t;
	while(t--){
		nhap();
	}
}
