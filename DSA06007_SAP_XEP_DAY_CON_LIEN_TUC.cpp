#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],b[n];
		for(int i = 0 ;i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
		int pos1= -1,pos2= -1;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				pos1 = i + 1;
				break;
			}
		}
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				pos2 = i + 1;
			}
		}
		cout << pos1 <<" "<< pos2 << endl;
	}
}
