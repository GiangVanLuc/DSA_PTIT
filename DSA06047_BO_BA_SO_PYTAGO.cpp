#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        int ok = 0;
        for(int i = n - 1; i >= 2; i--){
            int l = 0, r = i-1;
            while(l < r){
                ll sum = 1ll* a[l] * a[l] + 1ll * a[r] * a[r];
                if(sum == 1ll * a[i] * a[i]){
                    ok = 1;
                    break;
                }
                else if(sum < 1ll * a[i] * a[i]){
                    l++;
                }
                else{
                    r--;
                }
            }
            if(ok == 1){
                break;
            }
        }
        if(ok == 1) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }
}