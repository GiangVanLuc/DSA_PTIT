#include <bits/stdc++.h>

using namespace std;
int k, b[1005],ok;
set<int> se;
void ktao(){
	for(int i = 1; i <= k; i++){
		b[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && b[i] == se.size() - k + i ){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		b[i]++;
		for(int j = i + 1; j <= k; j++){
			b[j] = b[j-1] + 1;
		}
	}
}
int main(){
	int n;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	vector<int> v(se.begin(),se.end());
	ktao();
	ok = 1;
	while(ok){
		for(int i = 1; i <= k; i++){
			cout << v[b[i]-1] <<" ";
		}
		cout << endl;
		sinh();
	}
	
}
