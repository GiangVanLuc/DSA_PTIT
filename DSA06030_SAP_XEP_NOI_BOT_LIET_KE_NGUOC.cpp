#include <bits/stdc++.h>

using namespace std;

void Bubble_sort(int a[],int n){
	vector<int> res[n];
	int cnt = 0;
	for(int i = 0; i < n - 1; i++){
		bool ok = false;
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j] , a[j+1]);
				ok = true;
			}
		}
		if(ok){
			++cnt;
			for(int j = 0; j < n; j++){
				res[i].push_back(a[j]);
			}
		}
		else break;
	}
	for(int i = cnt-1; i >= 0; i--){
		cout <<"Buoc " << i + 1 <<": ";
		for(int x: res[i]) cout << x <<" ";
		cout << endl << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		Bubble_sort(a,n);	
	}
}
