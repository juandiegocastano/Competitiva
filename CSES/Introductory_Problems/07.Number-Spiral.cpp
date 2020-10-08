#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long x, y;
        cin >> y >> x;

        long long big, small, ans;
        if(x >= y) {
            big = x;
            small = y;
        } else {
            big = y;
            small = x;
        }

        long long lower, upper;
        
        if(big % 2 == 0) {
            upper = big * big;
            lower = (big - 2) * (big - 2);
        } else {
            upper = (big + 1) * (big + 1);
            lower = (big - 1) * (big - 1);   
        }

        long long first_half, second_half;
        first_half = (upper - lower - 2) / 2;
        second_half = first_half + 2;

        if(big % 2 == 0) {
            if(big == x) {
                ans = lower + first_half + y; 
            } else {
                ans = upper - x + 1; 
            }
        } else {
            if(big == x) {
                ans = lower + first_half - y + 1; 
            } else {
                ans = lower + x; 
            }
        }

        cout << ans << endl;
    }

    return 0;
}