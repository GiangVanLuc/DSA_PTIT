#include <bits/stdc++.h>

using namespace std;
int n,a[1005];
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			a[i] = n - i + 1;
		}
		do{
			for(int i = 1; i <= n; i++){
				cout << a[i] ;
			}
			cout <<" ";
		}
		while(prev_permutation(a+1,a+n+1));
		cout << endl;
	}
}
