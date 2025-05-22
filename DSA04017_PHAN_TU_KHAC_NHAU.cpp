#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n),b(n-1);
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++) cin >> b[i];
		int i = 0;
		int pos = -1;
		while(i < n - 1){
			if(a[i] != b[i]){
				pos = i + 1;
				break;
			}
			i++;
		}
		if(pos == -1){
			pos = n;
		}
		cout << pos << endl;
	}
}
