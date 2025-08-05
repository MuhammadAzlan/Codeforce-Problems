#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> events(n);
    for (int i = 0; i < n; ++i) {
        cin >> events[i];
    }

    int availableOfficers = 0;
    int untreatedCrimes = 0;

    for (int event : events) {
        if (event == -1) {
            if (availableOfficers > 0) {
                availableOfficers--;
            } else {
                untreatedCrimes++;
            }
        } else {
            availableOfficers += event;
        }
    }

    cout << untreatedCrimes << endl;
    return 0;
}