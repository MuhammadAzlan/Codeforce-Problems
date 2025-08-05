#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> numbers;

    // Extract numbers from the string
    for (char ch : s) {
        if (ch != '+') {
            numbers.push_back(ch - '0'); // Convert char to int
        }
    }

    // Sort the numbers in non-decreasing order
    sort(numbers.begin(), numbers.end());

    // Reconstruct the sum
    string result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result += to_string(numbers[i]);
        if (i != numbers.size() - 1) {
            result += '+';
        }
    }

    cout << result << endl;

    return 0;
}