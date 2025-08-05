#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    unordered_set<char> letters;
    
    // The first character is '{', the last is '}'. We process characters in between.
    for (size_t i = 1; i < s.size(); ) {
        if (s[i] == '}') {
            break;
        }
        if (s[i] >= 'a' && s[i] <= 'z') {
            letters.insert(s[i]);
            i++;
        } else {
            // Skip comma and space
            i += 2;
        }
    }
    
    cout << letters.size() << endl;
    return 0;
}