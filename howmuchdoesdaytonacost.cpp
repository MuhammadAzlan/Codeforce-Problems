#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool found = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == k) {
            found = true;
        }
    }
    if (!found) {
        return false;
    }
    for (int i = 0; i < n; ++i) {
        unordered_map<int, int> freq;
        int max_count = 0;
        int k_count = 0;
        for (int j = i; j < n; ++j) {
            freq[a[j]]++;
            if (a[j] == k) {
                k_count++;
            }
            if (freq[a[j]] > max_count) {
                max_count = freq[a[j]];
            }
            if (k_count > max_count - (a[j] == k ? 1 : 0)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cout << (solve() ? "YES" : "NO") << '\n';
    }
    return 0;
}