#include <bits/stdc++.h>
using namespace std;

const int tam=1e5+5;
const int oo=1e9;
const long long S= 2e5+1;

vector<vector<int>> g;

int n,k;

int dfs(int u, int p){
    int len=1;
    for(int v: g[u]) {
        if(v == p) continue;
    }
}

 

int main(){
    int m,n;

    while(cin>>m>>n&&m&&n){
        char mat[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
                cin>>mat[i][j];
            }
            cin.ignore();
            
        }
        
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(auto i: mat[0]) cout<<i;
    cout<<endl;
    }

    return 0;

}