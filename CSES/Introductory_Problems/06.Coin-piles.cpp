#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;
        string ans = "NO";
        long long big, small;
        if(a >= b) {
            big = a;
            small = b;
        } else {
            big = b;
            small = a;
        }

        long long dif = big - small;
        small -= dif;
        if(small >= 0 && small % 3 == 0) ans = "YES";

        cout << ans << endl;   
    }



    return 0;
}