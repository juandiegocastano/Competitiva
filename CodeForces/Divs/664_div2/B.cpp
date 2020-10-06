#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, sx, sy;
    cin >> n >> m >> sx >> sy;
    bool grid[n][m];

    cout << sx << ' ' << sy << endl;
    for (int i = 1; i <= m; i++)
    {
        if(i != sy) cout << sx << ' ' << i << endl;
    }
    
    int flag = -1;
    for (int i = 1; i <= n; i++)
    {
        if(i != sx) {
            if (flag == -1) {
                for (int j = m; j > 0 ; j--)
                {
                    cout << i << ' ' << j << endl;
                    flag = 1;
                }
                
            } else {
                for (int j = 1; j <= m; j++)
                {
                        cout << i << ' ' << j << endl;
                        flag = -1;
                    
                }
            }
        }
        
    }
    



    return 0;
}