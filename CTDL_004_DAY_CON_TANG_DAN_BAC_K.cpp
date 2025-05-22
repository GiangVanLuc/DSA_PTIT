#include <bits/stdc++.h>

using namespace std;
int n, k, b[1005],ok;
void ktao(){
	for(int i = 1; i <= k; i++){
		b[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && b[i] == n - k + i ){
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

int check(int a[]){
	for(int i = 1; i <= k - 1; i++){
		if(a[b[i] - 1] > a[b[i+1] - 1]) return 0;
	}
	return 1;
}
int main(){
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ktao();
	ok = 1;
	int cnt = 0;
	while(ok){
		if(check(a)){
			++cnt;
		}
		sinh();
	}
	cout <<cnt <<endl;
	
}
