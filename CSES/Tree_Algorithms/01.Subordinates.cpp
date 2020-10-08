#include <bits/stdc++.h>
using namespace std;
const int MX = 2e5+2;
vector<int> G[MX];
int children[MX];


void dfs(int u) {
    children[u] = 1;
    for (int v: G[u]) {
        dfs(v);
        children[u] += children[v];
    }
}

int main() {
    int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        int x; cin >> x;
        G[x].push_back(i);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
        cout << children[i] - 1 << ' ';
    cout << endl;
    
    return 0;
}