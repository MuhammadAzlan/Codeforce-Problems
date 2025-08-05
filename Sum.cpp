#include <bits/stdc++.h>

using namespace std;

struct Triplet {
    int a, b, c;
};

int main() {
    int n;
    cin >> n;
    vector<Triplet> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i].a >> num[i].b >> num[i].c;
        
        if (num[i].a + num[i].b == num[i].c || 
            num[i].a + num[i].c == num[i].b || 
            num[i].b + num[i].c == num[i].a) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}