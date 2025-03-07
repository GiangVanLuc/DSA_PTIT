#include <bits/stdc++.h>

using namespace std;

void Bubble_sort(int a[],int n){
	for(int i = 0; i < n - 1; i++){
		bool ok = false;
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j] , a[j+1]);
				ok = true;
			}
		}
		if(ok){
			cout <<"Buoc " << i + 1 << ": ";
			for(int j = 0; j < n; j++){
				cout << a[j] <<" ";
			}
			cout << endl;
			cout << endl;
		}
		else break;
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	Bubble_sort(a,n);
}
