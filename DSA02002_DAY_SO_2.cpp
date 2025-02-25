#include <bits/stdc++.h>

using namespace std;
int a[100];
vector<string> v;
void Try(int i){
	if(i == 0) return;
	string tmp = "";
	tmp +="[";
	for(int j = 1; j <= i;j++){
		tmp+=to_string(a[j]);
		if(j == i) tmp+="]";
		else tmp+=" ";
	}
	v.push_back(tmp);
	for(int j = 1; j < i ; j++){
		a[j] = a[j] + a[j+1];
	}
	Try(i-1);
}
int main(){
	int t; cin >> t;
	while(t--){
		v.clear();
		int n; cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Try(n);
		for(int i = v.size()-1; i>=0;i--){
			cout << v[i] <<" ";
		}
		cout << endl;
	}
}
