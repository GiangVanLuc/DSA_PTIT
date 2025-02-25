#include <bits/stdc++.h>

using namespace std;
int n,k,a[1005];
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == a[i-1] + 1){
		i--;
	}
	if(i == 0){
		for(int j = k; j >= 1 ;j--){
			a[j] = n - k + j;
		}
	}
	else{
		a[i]--;
		for(int j = i + 1; j <= k ;j++){
			a[j] = n - k + j;
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i= 1; i <= k; i++){
			cin >> a[i];
		}
		sinh();
		for(int i = 1; i <= k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
