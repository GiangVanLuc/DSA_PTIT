#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> array;
    int n, number[10] = {0}, total = 0;
    bool isOK = true;
    string result = "";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        array.push_back(a);
        number[a]++;
        total += a;
    }

    bool done = false;
    if (total % 3 == 1) {
        for (int i = 1; i <= 7; i += 3) {
            if (number[i] > 0) {
                number[i]--;
                done = true;
                break;
            }
        }
        if (!done) {
            int need = 2;
            for (int i = 2; i <= 8; i += 3) {
                while (number[i] > 0 && need > 0) {
                    number[i]--;
                    need--;
                }
            }
            done = (need == 0);
        }
        if (!done) isOK = false;
    } 
	else if (total % 3 == 2) {
        for (int i = 2; i <= 8; i += 3) {
            if (number[i] > 0) {
                number[i]--;
                done = true;
                break;
            }
        }
        if (!done) {
            int need = 2;
            for (int i = 1; i <= 7; i += 3) {
                while (number[i] > 0 && need > 0) {
                    number[i]--;
                    need--;
                }
            }
            done = (need == 0);
        }
        if (!done) isOK = false;
    }

    if (!isOK) {
        cout << "-1\n";
    } 
	else {
        for (int i = 9; i >= 0; i--) {
            result += string(number[i], '0' + i);
        }
        if (result.empty()) {
            cout << "-1\n";  
        } 
		else if (result[0] == '0') {
            cout << "0\n";  
        } 
		else {
            cout << result << '\n';
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

