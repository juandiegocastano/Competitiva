#include <bits/stdc++.h>
using namespace std;
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

/*
    ¿How many ways you can reach nth stair from 0th stair if 
    you can make a jump of 1, 2, or 3 stairs?
    Link: https://www.codechef.com/problems/JAM11
*/

long long dp[100001];
int mod = 1000000007;

long long stairs(int N) {
    if(N <= 2) return N;
    if(N == 3) return 4;

    if(dp[N] != -1) return dp[N];

    dp[N] = (stairs(N-1) % mod + stairs(N-2) % mod + stairs(N-3) % mod) % mod;
    return dp[N];

}

int main() {
    memset(dp, -1, sizeof dp);
    stairs(100000);
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;
        cout << stairs(n) << endl;
    }


    return 0;
}