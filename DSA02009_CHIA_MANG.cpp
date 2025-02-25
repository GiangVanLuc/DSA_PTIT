#include <bits/stdc++.h>

using namespace std;
int n, k, a[1001], ok, s = 0;
bool visited[1001];

void Try(int sum,int cnt){

	if(cnt == k){
		ok = 1;
		return;
	}
	if(ok) return;
	for(int j = 1; j <= n; j++){
		if(!visited[j]){
			visited[j] = true;
			if(sum == s){
				Try(0,cnt+1);
			}
			else if(sum < s){
				cout << cnt << " "<< sum+a[j] << endl;
				Try(sum + a[j], cnt);
			}
			
		}
		visited[j] = false;
	}
}
void inp(){
	cin >> n >> k;
	s = 0,ok = 0;
	memset(visited,0, sizeof(visited));
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		s += a[i];
	}
	if(s % k){
		cout << "0\n"; return;
	}
	s /= k; // sum : tong cua 1 tap con
	Try(0,0);
	cout << ok << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		inp();
	}
}
