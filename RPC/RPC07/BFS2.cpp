#include <bits/stdc++.h>
typedef pair<int, int> ii; 
typedef vector<ii> vii; 
typedef vector<int> vi;
const int INF = 1e9;

using namespace std;

vector<int> bfs(vector<vector<int>>& graph, int v) {
    vector<int> d(graph.size(), -1);
    queue<int> q;
    d[v] = 0;
    q.push(v);
    while(!q.empty()) {
        int x = q.front(); q.pop();
        for (int y: graph[x]) {
            if(d[x] == -1) { 
                d[y] = d[x] + 1;
                q.push(y);
            }
        }
    }
    return d;
}

int main() {
    int n; cin >> n;
    while(n--){
        int f; cin >> f;
        vi vec(f, 0);

        vi d(V, INF); d[source] = 0;
        queue<int> q; q.push(s);

        while(!q.empty()) {
            int u = q.front(); q.pop();
            for ( ii v: g[u]) {
                if(d[v.first] == INF) {
                    d[v.first] = d[u] + 1;
                    q.push(v.first);
                }
            }
            
        }

        

    }

    return 0;
}