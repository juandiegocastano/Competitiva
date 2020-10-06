#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t, a, b;
    cin >> t;
    while( t-- ) {
        cin >> a >> b;
        long long ans = min( max(a*2, b), max(b*2, a) );
        ans = min( ans, (long long)max(a+b, max(a, b)) );
        cout << ans*ans << '\n';
    }
    return 0;
}