#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k; cin >> n >> k;
	int mt[n+1][n+1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> mt[i][j];
		}
	}
	int a[n+1];
	for(int i = 1; i <=n ; i++){
		a[i] = i;
	}
	vector<string> v;
	do{
		int sum = 0;
		for(int i = 1; i <= n; i++){
			sum+= mt[i][a[i]];
		}
		if(sum == k){
			string ans ="";
			for(int i = 1; i <=n ;i++){
				ans += to_string(a[i]);
				ans+=" ";
			}
			v.push_back(ans);
		}
	}
	while(next_permutation(a+1,a+n+1));
	cout << v.size() << endl;
	for(string x: v){
		cout << x << endl;
	}
}
