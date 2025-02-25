#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;  
    while(t--) {
        int n, m;
        cin >> n >> m;  
        int a[n], b[m];
        int MAX_a = INT_MIN, MIN_b = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
			if(MAX_a < a[i]) MAX_a = a[i]; 
        }
          
        
        for(int i = 0; i < m; i++) {
            cin >> b[i];  
            if(MIN_b > b[i]) MIN_b = b[i];
        }
        cout << 1ll * MAX_a * MIN_b << endl;
    }
}
