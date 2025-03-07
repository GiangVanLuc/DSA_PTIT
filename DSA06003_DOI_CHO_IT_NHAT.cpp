#include <bits/stdc++.h>

using namespace std;
int selection_sort(int a[],int n){
	int cnt = 0;
	for(int i = 0; i < n - 1; i++){
		int min_idx = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_idx]) min_idx = j;
		}
		if(min_idx != i){
			swap(a[i],a[min_idx]);
			cnt++;
		}
	}
	return cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >>n ;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << selection_sort(a,n) << endl;
	}
}
