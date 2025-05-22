#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<string> ans;
int n,a[100], X[100];

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	ans.clear();
}

void Try(int i, int pos){
	for(int j = pos; j <= n; j++){
		if(X[i-1] < a[j]){
			X[i] = a[j];
			if(i > 1){
				// luu lai cau hinh hien tai
				string res = "";
				for(int j = 1;j <= i; j++)
					res += to_string(X[j]) + " ";
				ans.push_back(res);
			}
			Try(i + 1, j + 1);
			
		}
	}
}
int main(){
	int t = 1;
	while(t--){
		nhap();
		Try(1,1);
		sort(begin(ans), end(ans));
		for(string x: ans){
			cout << x << endl;
		}
	}
}
