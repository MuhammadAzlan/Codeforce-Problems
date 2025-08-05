#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int uppercaseCount = 0;
    int lowercaseCount = 0;

    for (char ch : s) {
        if (isupper(ch)) {
            uppercaseCount++;
        } else {
            lowercaseCount++;
        }
    }

   
    if (uppercaseCount > lowercaseCount) {
        for (char &ch : s) {
            ch = toupper(ch);
        }
    } else {
        for (char &ch : s) {
            ch = tolower(ch);
        }
    }

   
    cout << s << endl;

    return 0;
}