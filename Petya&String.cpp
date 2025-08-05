#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    // Convert both strings to lowercase
    for (char &c : s1) c = tolower(c);
    for (char &c : s2) c = tolower(c);

    // Compare the two strings lexicographically
    if (s1 < s2) cout << "-1\n";
    else if (s1 > s2) cout << "1\n";
    else cout << "0\n";

    return 0;
}