#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int current_good = 0;
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] == s[n - 1 - i]) {
                current_good++;
            }
        }
        
        int mismatched = (n / 2) - current_good;
        int min_possible = current_good - mismatched;
        int max_possible = current_good + mismatched;
        
        if (k >= min_possible && k <= max_possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}