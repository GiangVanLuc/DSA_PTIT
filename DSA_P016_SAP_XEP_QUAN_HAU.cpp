#include <bits/stdc++.h>

using namespace std;

int X[100];
int n = 8, a[10][10];
//X[i] = j : con hau thu hang thu i nam o cot j
//X = (x1,x2,... xn)
int cot[100], d1[100],d2[100]; 
int res = 0; 

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && d1[i-j+n] == 0 && d2[i+j-1] == 0 ){
			X[i] = j;
			cot[j] = 1;
			d1[i-j+n] = 1;
			d2[i+j-1] = 1;
			if(i == n){
				// ghi nhan ket qua
				int sum =0;
				for(int k = 1; k <= n; k++){
					sum+=a[k][X[k]];
				}
				res = max(res,sum);
			}
			else{
				Try(i+1);
			}
			cot[j] = 0;
			d1[i-j+n] = 0;
			d2[i+j-1] = 0;
		}
	}
}

void ktao(){
	memset(cot, 0, sizeof(cot));
	memset(d1, 0, sizeof(d1));
	memset(d2, 0, sizeof(d2));
}

int main(){
	int t; cin >> t;
	int cnt = 1;
	while(t--){
		ktao();
		res = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		Try(1);
		cout <<"Test "<< cnt++ <<": "<< res << endl;
	}
}
