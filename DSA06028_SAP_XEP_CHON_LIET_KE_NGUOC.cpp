#include <bits/stdc++.h>

using namespace std;
void selection_sort(int a[],int n){
	vector<int> res[n];
	for(int i = 0; i < n - 1; i++){
		int min_idx = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_idx]) min_idx = j;
		}
		swap(a[i],a[min_idx]);
		for(int j = 0; j < n; j++){
			res[i].push_back(a[j]);
		}		
	}
	for(int i = n - 2; i >= 0; i--){
		cout <<"Buoc "<< i+1 <<": ";
		for(int x : res[i]) cout << x <<" ";
		cout <<"\n\n";
	}
}
int main(){
	int n; cin >>n ;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	selection_sort(a,n);
}
