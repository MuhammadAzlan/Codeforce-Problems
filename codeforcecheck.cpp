#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    string target = "codeforces";
    while (t--) {
        char c;
        cin >> c;
        if (target.find(c) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
