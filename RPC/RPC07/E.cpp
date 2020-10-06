#include <bits/stdc++.h>

using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int memo[122][82][82];

int dp(int r, int c, int mov) {
    if(memo[r][c][mov]!=-1) return memo[r][c][mov];

    
    for (int i = 0; i < 4; i++)
    {
        dp(r,c,mov) = min();
        
    }
    
}

int main() {
    int n; cin>>n;
    while(n--){
        memset(memo, -1, sizeof memo);
    }
        
    }

    return 0;
}