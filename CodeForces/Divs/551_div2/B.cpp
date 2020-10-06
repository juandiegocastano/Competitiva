#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

using namespace std;

int main() {
    int n, m, h;
    cin >> n >> m >> h;

    int sol[n][m];
    memset(sol, -1, sizeof sol);

    int fview[m], lview[n];

    for (int i = 0; i < m; i++)
        cin >> fview[i];

    for (int i = 0; i < n; i++)
        cin >> lview[i];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            if(!val)
                sol[i][j] = 0;
        }
        
    }
    
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << sol[i][j] << ' ';
    //     }
    //     cout << endl;
        
    // }
    // cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(sol[j][i] == -1)
                sol[j][i] = fview[i];
        }
        
    }
    

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << sol[i][j] << ' ';
    //     }
    //     cout << endl;
        
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(sol[i][j] > lview[i])
                sol[i][j] = lview[i];  
        }
        
    }
    // cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << sol[i][j] << ' ';
        }
        cout << endl;
        
    }
    
    
    
    

    return 0;
}