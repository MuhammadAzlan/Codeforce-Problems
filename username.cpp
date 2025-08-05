#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    int amazingCount = 0;
    int minSoFar = points[0];
    int maxSoFar = points[0];

    for (int i = 1; i < n; ++i) {
        bool isAmazing = false;
        if (points[i] > maxSoFar) {
            maxSoFar = points[i];
            isAmazing = true;
        } else if (points[i] < minSoFar) {
            minSoFar = points[i];
            isAmazing = true;
        }
        if (isAmazing) {
            amazingCount++;
        }
    }

    cout << amazingCount << endl;

    return 0;
}