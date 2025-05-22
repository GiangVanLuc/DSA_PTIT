// 1. Phan chia bai toan lon thanh nhieu bai toan con
// 2. Co the ket hop loi giai, dap an cua nhung bai toan con de tao thanh dap an cho bai toan lon
// - Base case
// - Cong thuc truy hoi
// 3. Co khong gian vat ly de luu tru dap an cua cac bai toan con : bang phuong an

#include <bits/stdc++.h>

using namespace std;


// -dp[i] = 1
//neu a[i] > a[j]: dp[i] = max(dp[i], dp[j] + 1) : j < i;

// LONGEST INTERGER SEQUENCE
// L[i] = max(L[i], L[j] + 1)
int main(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n; i++){
		cin >> v[i];
	}
	int L[n] ;
	for(int i = 0; i < n; i++){
		L[i] = 1;
		for(int j = 0 ; j < i; j++){
			if(v[j] < v[i]){
				L[i] = max(L[i], L[j] + 1);
			}
		}
	}
	cout << *max_element(L, L + n) << endl;
}
