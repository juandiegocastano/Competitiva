#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- ) {
        long long n, k;
        cin >> n >> k;
        long long ans = 1;
        for( long long i = 1; i <= k && i*i <= n; i++ ) {
            
            if( n%i == 0 ) {
                ans = max(ans, i);
                if( n/i <= k ) ans = max( ans, n/i );
            }
        }
        cout << n/ans << '\n';
    }
    return 0;
}