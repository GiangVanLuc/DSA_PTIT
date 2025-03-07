#include <bits/stdc++.h>

using namespace std;
void insertion_sort(int a[],int n){
	vector<int> res[n];
	for(int i = 0; i < n; i++){
		int pos = i - 1, x = a[i];
		while(pos >= 0 && a[pos] >= x){
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos+ 1] = x;
		for(int j = 0; j <= i; j++){
			res[i].push_back(a[j]);
		}
	}
	for(int i = n - 1; i >= 0; i--){
		cout <<"Buoc " << i  <<": ";
		for(int x: res[i]) cout << x <<" ";
		cout << endl << endl;
	}
}
int main(){
	int n; cin >>n ;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	insertion_sort(a,n);
}
