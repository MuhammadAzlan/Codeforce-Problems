#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n) {
    if (n == 0) return false; 
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) return false;
        n /= 10;
    }
    return true;
}

int countLuckyDigits(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) count++;
        n /= 10;
    }
    return count;
}

int main() {
    long long n;
    cin >> n;
    int luckyCount = countLuckyDigits(n);
    cout << (isLucky(luckyCount) ? "YES" : "NO") << endl;
    return 0;
}