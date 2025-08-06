#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m;
    cin >> n >> m;
    auto it = find(primes.begin(), primes.end(), n);
    if (it != primes.end() && next(it) != primes.end() && *next(it) == m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}