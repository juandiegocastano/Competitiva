#include <bits/stdc++.h>
using namespace std;
const int MXN = 1e5+1;
vector<int> G[MXN];
long long c[MXN], Min;
bool visited[MXN];

void dfs(int v) {
    Min = min(Min, c[v]);
    visited[v] = true;
    for(int u: G[v]) {
        if(!visited[u])
            dfs(u);
    }
}

void bfs(int v) {
    queue<int> q;
    q.push(v);
    while(!q.empty()) {
        int val = q.front(); q.pop();
        Min = min(Min, c[val]);
        for(int u: G[val]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
}


int main() {
    int n, m; cin >> n >> m;
    long long Min_sum = 0;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    while(m--) {
        int x, y; cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if(!visited[i]) {
            Min = 1e10;
            bfs(i);
            Min_sum += Min;
        }
    }

    cout << Min_sum << endl;


    return 0;
}