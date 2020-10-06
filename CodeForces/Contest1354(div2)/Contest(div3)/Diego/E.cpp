#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- ) {
        int n;
        cin >> n;
        vector< string > v(n+1);
        vector< vector<bool> > used(n+1, vector< bool > (n+1) );
        for( int i = 0; i < n; i++ ) {
            cin >> v[i];
            used[i][n] = true;
            used[n][i] = true;
        }
        bool ans = true;
        for( int i = n-1; i >= 0; i-- ){
            for( int j = n-1; j >= 0; j-- ) {
                if( v[i][j] == '1' ) {
                    if( !used[i+1][j] && !used[i][j+1] ) {
                        ans = false;
                    } else {
                        used[i][j] = true;
                    }
                }
            }
        }
        cout << (ans? "YES": "NO") << '\n';
    }
    return 0;
}