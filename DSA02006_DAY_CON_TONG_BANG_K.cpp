#include <bits/stdc++.h>

using namespace std;
int n , k, sum = 0, a[100],X[100];
int check = 0;

void Try(int i, int pos){
	for(int j = pos; j <= n; j++){
		X[i] = a[j];
		sum+=a[j];
		if(sum == k){
			cout <<"[";
			for(int l = 1; l <= i; l++){
				cout << X[l];
				if(l != i) cout <<" ";
				check = 1;
			}
			cout <<"]";
			cout << " ";
		}
		else Try(i+1,j+1);
		sum-=a[j];
	}
}
int main(){
	int t; cin >> t;
	while(t--){
	 	cin >> n >> k;
	 	for(int i = 1; i <= n; i++) cin >> a[i];
	 	sort(a+1,a+n+1);
	 	Try(1,1);
	 	if(check == 0){
	 		cout << - 1;
		}
		else check = 0;
	 	cout << endl;
	}
}
