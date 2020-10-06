#include <bits/stdc++.h>

using namespace std;

const int MX = 20;
typedef pair<int, int> ii;

int vis[MX][MX];
char mat[MX][MX];
int W, H, cont; 

int dx[8] = {1, 0, -1, 0};
int dy[8] = {0, 1, 0, -1};

void dfs(int x, int y){
    vis[x][y]=1;
    for (int i = 0; i < 4; i++) {
        int mx = x + dx[i]; int my = y + dy[i];
        if(mx<H && my<W && mx>=0 && my>=0 && !vis[mx][my] && (mat[mx][my]=='.' || mat[mx][my]=='@') ){
            cont++;
            dfs(mx, my);
        }
    }  
}

int main() {
    int t; cin>>t;
    for (int x = 0; x < t; x++)
    {
        cin>>W>>H; //W cols, H rows
        cont=1;
        memset(vis, 0, sizeof vis);

        ii init_pos=make_pair(0,0);

        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='@') init_pos=make_pair(i,j);
            }
            
        }

        // cout<<init_pos.first<<' '<<init_pos.second<<endl;
        dfs(init_pos.first, init_pos.second);
        cout<<"Case "<< x+1 <<": "<<cont<<endl; 
    }
    
        

    
    return 0;
}