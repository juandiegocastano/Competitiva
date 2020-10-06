#include <bits/stdc++.h>
using namespace std;

/*
    ¿How many ways you can reach nth stair from 0th stair if 
    you can make a jump of 1, 2, or 3 stairs?
    Link: https://www.codechef.com/problems/JAM11
*/

long long dp[100001];
int mod = 1000000007;

void init() {
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i=4; i<100001; i++)
        dp[i] = (dp[i-1] % mod + dp[i-2] % mod + dp[i-3] % mod) % mod;
}

int main() {
    int t; cin >> t;
    init();
    while(t--) {
        int n; cin >> n;
        cout << dp[n] << endl;
    }



    return 0;
}