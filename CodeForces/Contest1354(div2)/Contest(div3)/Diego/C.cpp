#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t, n;
    cin >> t;
    while( t-- ) {
        cin >> n;
        int v[n], par[2] = {0, 0};
        bool isdif1 = 0;
        for( int i = 0; i < n; i++ ) {
            cin >> v[i];
            par[ v[i]%2 ]++;
        }
        sort( v, v+n );
        for( int i = 1; i < n; i++ ) {
            isdif1 += (v[i]-v[i-1] == 1);
        }
        if( ( par[0]%2 == 0 && par[1]%2 == 0) || isdif1 != 0 ) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}