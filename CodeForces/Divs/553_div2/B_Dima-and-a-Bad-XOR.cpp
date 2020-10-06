#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

using namespace std;
const int MX = 505;

int dp[MX][1024];
int res[MX];
int n, m;
int mat[MX][MX];

bool Dp(int i, int xorr) {
    if(i == n) return xorr > 0;
    if(dp[i][xorr] != -1) return dp[i][xorr];

    for (int j = 0; j < m; j++) {
        if(Dp(i+1, xorr ^ mat[i][j])) {
            res[i] = j;
            return true;
        }
    }
    return dp[i][xorr] = 0;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    memset(dp, -1, sizeof dp);

    if(Dp(0, 0)) {
        cout << "TAK" << endl;
        for (int i = 0; i < n; i++)
            cout << res[i] + 1 << ' ';    
        cout << endl;
    } else cout << "NIE" << endl;
    

    return 0;
}