#include <bits/stdc++.h>

using namespace std;
int n,a[1005];
int main(){
	int t; cin >>t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >>a[i];
		if(next_permutation(a+1,a+n+1)){
			for(int i = 1; i <= n; i++){
				cout << a[i] <<" ";
			}
		}
		else{
			for(int i = 1; i <= n; i++){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
