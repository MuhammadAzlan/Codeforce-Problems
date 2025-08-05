#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mishka_wins = 0, chris_wins = 0;
    
    for (int i = 0; i < n; ++i) {
        int m, c;
        cin >> m >> c;
        if (m > c) {
            mishka_wins++;
        } else if (c > m) {
            chris_wins++;
        }
    }
    
    if (mishka_wins > chris_wins) {
        cout << "Mishka" << endl;
    } else if (chris_wins > mishka_wins) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
    
    return 0;
}
