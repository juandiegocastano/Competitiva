#include <bits/stdc++.h>
using namespace std;
string answer(10, 'a');
int n, m;
string v[10];
bool dp[10][1<<10];

int check( int idx, char c ) {
    int ans = 0;
    for( int i = 0; i < n; i++ ) {
        if( v[i][idx] != c ) ans |= 1<<i;
    }
    return ans;
}

bool solve( int idx=0, int mask=0 ) {
    if( idx == m ) return true;
    bool &ans = dp[idx][mask];
    if( ans == 1 ) return false;
    ans = 1;
    for( int i = 0; i < n; i++ ) {
        answer[idx] = v[i][idx];
        int temp = check(idx, answer[idx] );
        if( mask>>i & 1 ) {
            if( temp&mask ) break;
            if( solve(idx+1, temp|mask ) ) return true;
            break;
        } else {
            if( (temp&mask) == 0 && solve( idx+1, temp|mask) ) return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- ) {
        cin >> n >> m;
        for( int i = 0; i < n; i++ ) {
            cin >> v[i];
        }
        memset( dp, 0, sizeof dp );
        if( solve() ) {
            cout << answer.substr(0, m) << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}