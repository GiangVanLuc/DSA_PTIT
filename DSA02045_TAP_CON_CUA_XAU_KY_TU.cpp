#include <bits/stdc++.h>

using namespace std;
int n; 
string s;
vector<string> v;
string X[17];
void Try(int i, int pre){
	for(int j = pre; j <= n; j++){
		X[i] = s[j];
		if(i >= 1){
			string res;
			for(int l = 1; l <=i ; l++){
				res += X[l];
			}
			v.push_back(res);
		}
		Try(i + 1, j + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		s = "";
		for(int i = 0; i < n; i++){
			char x; cin >> x;
			s += x;
		}
		sort(begin(s), end(s));
		s = " " + s;
		
		Try(1,1);
		sort(begin(v), end(v));
		for(auto x: v){
			cout << x << " ";
		}
		cout << endl;
		v.clear();
	}
}
