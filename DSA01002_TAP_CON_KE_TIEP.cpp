#include <bits/stdc++.h>

using namespace std;
int n,k,a[1005];
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i){
		i--;
	}
	a[i]++;
	for(int j = i + 1; j <= k; j++){
		a[j] = a[j-1] + 1;
	}
}
int check(){
	for(int i = 1; i <= k ;i++){
		if(a[i] != n - k + i){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
		}
		if(check()){
			for(int i = 1; i <= k ; i++){
				cout << i <<" ";
			}
		}
		else{
			sinh();
			for(int i = 1; i <= k; i++){
				cout << a[i] <<" ";
			}
		}
		cout << endl;	
	}
}
