#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;

int m, n; 
const int MXN = 100;
char mat[MXN][MXN];
// set<ii> contados;
bool vis[MXN][MXN];


int dx[8] = {1, 0, 1, -1,  0, -1, -1, 1};
int dy[8] = {0, 1, 1,  0, -1, -1,  1, -1};


void dfs(int x, int y) {
  vis[x][y] = 1;
  for(int i = 0; i < 8; i++) {
    int mx = x + dx[i], my = y + dy[i];
    if(mx >= 0 && mx < m && my >= 0 && my < n && !vis[mx][my] && mat[mx][my] == '@')
     dfs(mx, my);
  }
}

int main() {
	
    while(cin>>m>>n&&n&&m){
        memset(vis,0, sizeof vis);
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j) {
                cin>>mat[i][j];
            }
        }

        int conjuntos = 0;
        
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if(mat[i][j] == '@' && vis[i][j]==0 ){
                    conjuntos++;
                    dfs(i, j);
                }
            }
        }
        
        cout<<conjuntos<<endl;
    }

	return 0;
}
