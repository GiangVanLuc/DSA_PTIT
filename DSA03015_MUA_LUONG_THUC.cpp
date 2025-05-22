#include <bits/stdc++.h>

using namespace std;
void Test(){
	int n, s, m;
	cin >> n >> s >> m;
	if(n < m || 6 * ( n - m) < m){
		cout << -1 << endl;
	}
	else{
		cout << (m*s + n - 1) / n << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		Test();
	}
}
