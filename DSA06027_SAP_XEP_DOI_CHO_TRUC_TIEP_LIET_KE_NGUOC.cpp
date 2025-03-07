#include <bits/stdc++.h>

using namespace std;
void sapxep(int a[],int n){
	vector<int> res[n];
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]) swap(a[i], a[j]);
		}
		for(int k = 0; k < n; k++){
			res[i].push_back(a[k]);
		}
	}
	for(int i = n - 2; i >= 0; i--){
		cout << "Buoc "<< i + 1 <<": ";
		for(auto x: res[i]){
			cout << x << " ";
		}
		cout << endl;
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sapxep(a,n);
	}
}
