#include <bits/stdc++.h>

using namespace std;
int X[11];
int a[11];
int ok, n, k;
void print(int i){
	ok = 1;
	cout <<"[";
	for(int j = 1; j < i; j++){
		cout << X[j] << " ";
	}
	cout << X[i] <<"] ";
}
void Try(int i,int sum, int pos){
	for(int j = pos + 1; j <= n; j++){
		if(sum + a[j] <= k){
			X[i] = a[j];
			if(sum + a[j] == k){
				print(i);
			}
			else Try(i + 1, sum + a[j], j);
			}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1);
		ok = 0;
		Try(1,0,0);
		if(ok == 0){
			cout <<"-1";
		}
		cout <<"\n";
		
	}
}
