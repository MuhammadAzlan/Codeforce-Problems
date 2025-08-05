#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int total_drink = k * l;
    int toasts_drink = total_drink / (n * nl);
    
    int total_slices = c * d;
    int toasts_slices = total_slices / n;
    
    int toasts_salt = p / (n * np);
    
    int max_toasts = min({toasts_drink, toasts_slices, toasts_salt});
    
    cout << max_toasts << endl;
    
    return 0;
}