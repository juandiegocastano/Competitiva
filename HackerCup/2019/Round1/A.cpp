#include <bits/stdc++.h>
using namespace std;
const int INF = 2147483647;

int main() {

    int t; cin >> t;

    for (int x = 1; x <= t; x++) {
        cout << "Case #" << x << ": ";
        int n, m; cin >> n >> m;
        int d[n+1][n+1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                d[i][j] = INF;
            }
            
        }
        // Guardo querys
        int querys[m][3];
        
        for(int i = 0; i < m; i++) {
            int xi, yi, zi; 
            cin >> xi >> yi >> zi;
            d[xi][yi] = zi;
            d[yi][xi] = zi;
            querys[i][0] = xi;
            querys[i][1] = yi;
            querys[i][2] = zi;
        }
        // Floyd
        for (int k = 1; k <= n; ++k) {
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= n; ++j) {
                    if (d[i][k] < INF && d[k][j] < INF)
                        d[i][j] = min(d[i][j], d[i][k] + d[k][j]); 
                }
            }
        }

        bool impossible = false;
        // Si weight de mi query es dif de lo que me dio floyd, impossible
        for (int i = 0; i < m; i++)
        {
            int row = querys[i][0];
            int col = querys[i][1];
            int weight = querys[i][2];
            if(d[row][col] != weight )
                impossible = true;
        }

        if(!impossible) {
            cout << m << endl;
            // for (int i = 1; i < n; i++)
            // {
            //     for (int j = i + 1; j <= n; j++) // Desde i+1 para que solo imprima de i a j, y no de j a i.
            //     {
            //         if(d[i][j] != INF)
            //             cout << i << ' ' << j << ' ' << d[i][j] << endl;
            //     }
                
            // }
            for (auto each: querys)
            {
                cout << each[0] << ' ';
                cout << each[1] << ' ';
                cout << each[2] << endl;
            }
            
        } else cout << "Impossible" << endl;
        
    }


    return 0;
}