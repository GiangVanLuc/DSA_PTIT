#include <bits/stdc++.h>

using namespace std;

int main(){
	int c, n; cin >> c >> n;
	int res[c + 1] = {0};
	res[0] = 1;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		for(int j = c; j >= a[i]; j--){
			if(res[j - a[i]]) res[j] = 1;
		}
	}
	for(int i = c; i >= 0; i--){
		if(res[i]){
			cout << i << endl;
			return 0;
		}
	}
}
