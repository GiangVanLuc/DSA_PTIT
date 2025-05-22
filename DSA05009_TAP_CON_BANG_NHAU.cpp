#include <bits/stdc++.h>

using namespace std;
int n, a[1000], k , X[100], ans = 0;

void inp(){
	cin >> n;
	int sum = 0;
	for(int i = 0;i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum % 2){
		cout <<"NO\n";
		return;
	}
	bool mark[sum/2 + 1];
	memset(mark, false, sizeof(mark));
	for(int i = 0; i < n; i++){
		for(int j = sum / 2; j >= a[i]; j--){
			if(mark - a[i] == 1 || j == a[i]){
				mark[j] = true;
			}
		}
	}
	if(mark[sum / 2]) cout << "YES\n";
	else cout <<"NO\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		inp();
	}
}
