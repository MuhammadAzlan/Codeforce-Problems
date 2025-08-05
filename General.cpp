#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int max_height = *max_element(heights.begin(), heights.end());
    int min_height = *min_element(heights.begin(), heights.end());

    int max_pos = 0;
    for (int i = 0; i < n; ++i) {
        if (heights[i] == max_height) {
            max_pos = i;
            break;
        }
    }

    int min_pos = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (heights[i] == min_height) {
            min_pos = i;
            break;
        }
    }

    int swaps = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos) {
        swaps -= 1;
    }

    cout << swaps << endl;

    return 0;
}