#include <bits/stdc++.h>

using namespace std;
int n, S, a[100], X[100], k,ok;
void Try(int i){
	for(int j = X[i-1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			// tinh tong tien cac to tien duoc chon
			int sum = 0;
			for(int j = 1; j <= k; j++){
				sum += a[X[i]];
			}
			if(sum == S){
				ok = true;
			}
		}
		else Try(i+1);
	}
}
void inp(){
	cin >> n >> S;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1,greater<int>());
	for(int i= 1; i <= n; i++){
		k = i;
		Try(1);
		if(ok){
			cout << i << endl; return;
		}
	}
	cout << "-1" << endl;
	
}


int main(){
	int t; cin >> t;
	while(t--){
		inp();
	}
}
