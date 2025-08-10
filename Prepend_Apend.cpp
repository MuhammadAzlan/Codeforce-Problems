#include <bits/stdc++.h>

using namespace std;

int findOriginalLength(const string &s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if ((s[left] == '0' && s[right] == '1') || (s[left] == '1' && s[right] == '0')) {
            left++;
            right--;
        } else {
            break;
        }
    }
    return right - left + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << findOriginalLength(s) << endl;
    }
    return 0;
}