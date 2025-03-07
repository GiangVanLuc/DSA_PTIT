#include <bits/stdc++.h>

using namespace std;
int n, w;
int a[100] , c[100];
int x[100];
int fopt = -99;
int xopt[100];
bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += a[i] * x[i];
	}
	return sum <= w;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			if(check()){
				int tmp = 0;
				for(int i = 1; i <= n;i++){
					tmp += c[i] * x[i];
				}
				if(fopt < tmp){
					fopt = tmp;
					for(int i = 1; i <= n; i++){
						xopt[i] = x[i];
					}
				}
			}
		}
		else Try(i+1);
	}
}
int main(){
	cin >> n >> w;
	for(int i = 1; i <= n; i++) cin >> c[i];
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(1);
	cout << fopt << endl;
	for(int i = 1; i <= n; i++) cout << xopt[i] <<" ";
	cout << endl;
	
}
