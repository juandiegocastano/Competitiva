#include <bits/stdc++.h>

using namespace std;
const int MX = 1e3;
string mat[MX];
int n, m; 
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void fill(int x, int y) {
    mat[x][y] = '#';
    for (int i = 0; i < 4; i++)
    {
        int ni = x + dx[i];
        int nj = y + dy[i];
        if(ni >= 0 && ni < n && nj >= 0 && nj < m) {
            if(mat[ni][nj] == '.') {
                fill(ni, nj);
            }
        }
    }
    
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        mat[i] = s;   
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == '.') {
                ans++;
                fill(i, j);
            }
        }
        
    }

    cout << ans << endl;
    

    return 0;
}