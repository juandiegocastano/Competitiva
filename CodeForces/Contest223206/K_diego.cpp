#include <bits/stdc++.h>
using namespace std;
 
bool isPrime( long long x ) {
    if( x <= 1 ) return false;
    for( long long i = 2; i*i <= x; i++ ) {
        if( x%i == 0 ) return false;
    }
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    bool ans[50];
    memset( ans, 0, sizeof ans );
    
    long long a = 0, b = 1;
    for( int i = 2; i < 50; i++ ) {
        long long temp = b;
        b = a+b;
        a = temp;
        if( isPrime(b) ) ans[i] = true;
    }
    int t, n;
    cin >> t;
    while( t-- ) {
        cin >> n; n--;
        cout << ( ans[n] ? "prime" : "not prime" ) << '\n';
    }
    return 0;
}