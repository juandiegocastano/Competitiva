int dx[8] = {1, 0, 1, -1,  0, -1, -1, 1};
int dy[8] = {0, 1, 1,  0, -1, -1,  1, -1};

bool vis[MXN][MXN];

void dfs(int x, int y) {
  vis[x][y] = 1;
  for(int i = 0; i < 8; i++) {
    int mx = x + dx[i], my = y + dy[i];
    if(mx >= 0 && mx < n && my >= 0 && my < m && !vis[mx][my] && a[mx][my] != '@')
     dfs(mx, my);
  }
}