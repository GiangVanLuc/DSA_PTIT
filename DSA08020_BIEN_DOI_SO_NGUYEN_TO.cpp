#include <bits/stdc++.h>

using namespace std;
vector<int> res;
bool prime[10001];

void sieve(){
	memset(prime,true,sizeof(prime));
	for(int i = 2; i <= 100; i++){
		if(prime[i]){
			for(int j = i*i; j <= 10000; j+=i){
				prime[j] = false;
			}
		}
	}
}
int bfs(int s, int t){
	queue<pair<int,int>> q;
	q.push({s, 0});
	bool used[10001];
	memset(used,false,sizeof(used));
	used[s] = true;
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		int num = tmp.first;
		int x = num;
		q.pop();
		if(num == t) return tmp.second;
		vector<int> digit;
		while(x){
			digit.push_back(x % 10);
			x/=10;
		}
		reverse(begin(digit), end(digit));
		for(int i = 0; i < 4; i++){
			for(int j = 0; j <= 9; j++){
				if(i == 0 && j == 0) continue;
				if(digit[i] != j){
					int new_num = 0;
					for(int k = 0; k < 4; k++){
						if(i != k) new_num = new_num*10 + digit[k];
						else new_num = new_num * 10 + j;
					}
					if(prime[new_num] && !used[new_num]){
						q.push({new_num, tmp.second + 1});
						used[new_num] = true;
					}
				}
			}
		}
	}
	return 0;
}
int main(){
	sieve();
	int T; cin >> T;
	while(T--){
		int s,t;
		cin >> s >> t;
		cout << bfs(s,t) <<"\n"; 
	}
}
