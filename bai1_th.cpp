#include <bits/stdc++.h>

using namespace std;
int n, c1[100],d1[100],d2[100];
int cnt = 0, X[100];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(c1[j] == false && d1[i - j + 1] == false && d2[i + j - n] == false){
			X[i] = j;
			c1[j] = d1[i - j + 1] = d2[i + j - n] = true;
			if(i == n){
				++cnt;
			}
			else{
				Try(i+1);
			}
			c1[j] = d1[i - j + 1] = d2[i + j - n] = false;
		}
	}
}
int main(){
	cin >> n;
	Try(1);
	cout << cnt << endl;
}
