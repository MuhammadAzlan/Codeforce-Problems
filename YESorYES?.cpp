#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() != 3) {
            cout << "NO" << endl;
            continue;
        }
        bool valid = true;
        for (int i = 0; i < 3; ++i) {
            char c = tolower(s[i]);
            if (i == 0 && c != 'y') valid = false;
            if (i == 1 && c != 'e') valid = false;
            if (i == 2 && c != 's') valid = false;
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}