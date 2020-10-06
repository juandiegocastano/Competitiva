#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int r,c; cin>>r>>c;
    char mat[r][c];
    vector<pair<int, int>> strawberries;

    // if( find(vec.begin(), vec.end(), item) != vec.end() )


    vector<int> comeCol, comeFil;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='S'){
                comeFil.push_back(i);
                comeCol.push_back(j);
            }
        }
        
    }
    int comidas=0;


    for (int i = 0; i < r; i++)
    {
        if( !(find(comeFil.begin(), comeFil.end(), i) != comeFil.end()) ){
            for (int j = 0; j < c; j++)
            {
               if(mat[i][j]=='.'){
                   comidas++;
                   mat[i][j]='x';
               }
            }
        }
        
    }

    for (int i = 0; i < c; i++)
    {
        if( !(find(comeCol.begin(), comeCol.end(), i) != comeCol.end()) ){
            for (int j = 0; j < r; j++)
            {
               if(mat[j][i]=='.'){
                   comidas++;
                   mat[j][i]='x';
               }
            }
        }
        
    }
    

    cout<<comidas;

    return 0;
}