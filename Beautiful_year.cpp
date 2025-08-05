#include <bits/stdc++.h>
using namespace std;
bool hasDistinctDigits(int year) {
    unordered_set<int> digits;
    while (year > 0) {
        int digit = year % 10;
        if (digits.find(digit) != digits.end()) {
            return false;
        }
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int findNextDistinctYear(int y) {
    y++;
    while (true) {
        if (hasDistinctDigits(y)) {
            return y;
        }
        y++;
    }
}

int main() {
    int y;
    cin >> y;
    int nextYear = findNextDistinctYear(y);
    cout << nextYear << endl;
    return 0;
}