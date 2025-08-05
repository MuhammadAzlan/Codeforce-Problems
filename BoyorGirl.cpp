#include <bits/stdc++.h>
using namespace std;
int main() {
    string username;
    cin >> username;

    set<char> uniqueChars;

    for (char ch : username) {
        uniqueChars.insert(ch);
    }

    if (uniqueChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}