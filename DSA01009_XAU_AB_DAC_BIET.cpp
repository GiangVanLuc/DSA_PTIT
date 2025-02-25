#include <bits/stdc++.h>

using namespace std;
int n,k,ok, a[1005];
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i] = 1;
	}
}

int check(){
	int ans = 0, dem = 0;
	for(int i =1 ; i <=n ; i++){
		if(a[i] == 1) ++dem;
		else{
			dem = 0;
		}
		if(dem > k) return false;
		if(dem == k) ++ans;
	}
	return ans == 1;
}
int main(){
	cin >> n >> k;
	ktao();
	ok = 1;
	int cnt = 0;
	vector<string> v;
	while(ok){
		if(check()){
			string res="";
			for(int i = 1; i <= n ; i++){
				if(a[i] == 1){
					res+="A";
				}
				else{
					res+="B";
				}
			}
			v.push_back(res);
			cnt++;
		}
		sinh();
	}
	sort(v.begin(),v.end());
	cout << cnt <<endl;
	if(cnt > 0){
		for(auto x: v){
			cout << x << endl;
		}
	}
}
