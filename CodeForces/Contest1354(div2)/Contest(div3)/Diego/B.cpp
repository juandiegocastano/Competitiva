#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- ) {
        int n;
        cin >> n;
        int v[n];
        for( int i = 0; i < n; i++ ) {
            cin >> v[i];
        }
        sort( v, v+n );
        int ans = 1e9;
        for( int i = 1; i < n; i++ ) {
            ans = min( ans, v[i]-v[i-1] );
        }
        cout << ans << '\n';
    }
    return 0;
}