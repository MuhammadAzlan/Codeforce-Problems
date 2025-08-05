#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    if (sum % 2 != 0) {
        cout << "NO\n";
    } else {
        // Sum is even. Need at least one even and one odd, or all even or all odd (but odd count must be even)
        if (odd_count >= 2 && odd_count % 2 == 0) {
            cout << "YES\n";
        } else if (even_count >= 1 && odd_count >= 1) {
            // Can we split into two parts with same parity sums?
            // Yes, because sum is even. For example, take one even and others, sum of others is even - even = even.
            cout << "YES\n";
        } else if (even_count == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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