#include <bits/stdc++.h>

using namespace std;
void insertion_sort(int a[],int n){
	for(int i = 0; i < n; i++){
		int pos = i - 1, x = a[i];
		while(pos >= 0 && a[pos] >= x){
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos+ 1] = x;
		cout << "Buoc " << i <<": ";
		for(int j = 0; j <= i; j++){
			cout << a[j] <<" ";
		}
		cout << endl;
		cout << endl;
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

