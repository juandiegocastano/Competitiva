#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;

int main() {
    int n; cin >> n;
    char mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    bool termino = false;
    bool valido = true;
    for (int i = 0; i < n-1 && !termino; i++)
    {
        for (int j = 1; j < n-1 && !termino; j++)
        {
            if(mat[i][j] == '.') {
                if(mat[i+1][j] == '.' && mat[i+2][j] == '.' &&
                    mat[i+1][j+1] == '.' && mat[i+1][j-1] == '.') {
                       mat[i][j] = '#'; 
                       mat[i+1][j] = '#';
                       mat[i+2][j] = '#';
                       mat[i+1][j+1] = '#';
                       mat[i+1][j-1] = '#';
                    }
                else {
                    termino = true;
                    valido = false;
                }
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        if(mat[n-1][j] == '.')
            valido = false;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(mat[i][0] == '.' || mat[i][n-1] == '.')
            valido = false;
    }
    
    if(valido)
        cout << "YES" << endl;
    else cout << "NO" << endl;

    
    

    return 0;
}