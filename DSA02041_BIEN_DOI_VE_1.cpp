#include <bits/stdc++.h>

using namespace std;
int Try(int n){
	int tmp1 = INT_MAX, tmp2 = INT_MAX, tmp3 = INT_MAX;
	if(n == 1) return 0;
	if(n%2 == 0) tmp1 =  1 + Try(n/2);
	if (n%3 == 0) tmp2 = 1 + Try(n/3);
	if(n > 1) tmp3 = 1 + Try(n - 1);
	return min(min(tmp1,tmp2), tmp3);
}
int main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		cout << Try(n) << endl;
	}
}
