#include <bits/stdc++.h>

using namespace std;

void sapxep(int a[],int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]) swap(a[i], a[j]);
		}
		cout << "Buoc " << i + 1 <<": ";
		for(int k = 0; k < n; k++){
			cout << a[k]<<" ";
		}
		cout << endl;
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sapxep(a,n);
}
