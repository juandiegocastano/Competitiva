#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
struct edge {
  int u, v;
  LL cap, flow;
  edge() {}
  edge(int u, int v, LL cap): u(u), v(v), cap(cap), flow(0) {}
};
struct dinic {
  int N;
  vector<edge> E;
  vector<vector<int>> g;
  vector<int> d, pt;
  dinic(int N): N(N), E(0), g(N), d(N), pt(N) {}
  void add_edge(int u, int v, LL cap) {
    if (u != v) {
      E.emplace_back(edge(u, v, cap));
      g[u].emplace_back(E.size() - 1);
      E.emplace_back(edge(v, u, 0));
      g[v].emplace_back(E.size() - 1);
    }
  }
  bool bfs(int S, int T) {
    queue<int> q({S});
    fill(d.begin(), d.end(), N + 1);
    d[S] = 0;
    while(!q.empty()) {
      int u = q.front(); q.pop();
      if (u == T) break;
      for (int k: g[u]) {
        edge &e = E[k];
        if (e.flow < e.cap && d[e.v] > d[e.u] + 1) {
          d[e.v] = d[e.u] + 1;
          q.emplace(e.v);
        }
      }
    }
    return d[T] != N + 1;
  }
  LL dfs(int u, int T, LL flow = -1) {
    if (u == T || flow == 0) return flow;
    for (int &i = pt[u]; i < int(g[u].size()); ++i) {
      edge &e = E[g[u][i]];
      edge &oe = E[g[u][i]^1];
      if (d[e.v] == d[e.u] + 1) {
        LL amt = e.cap - e.flow;
        if (flow != -1 && amt > flow) amt = flow;
        if (LL pushed = dfs(e.v, T, amt)) {
          e.flow += pushed;
          oe.flow -= pushed;
          return pushed;
        }
      }
    }
    return 0;
  }
  LL max_flow(int S, int T) {
    LL total = 0;
    while (bfs(S, T)) {
      fill(pt.begin(), pt.end(), 0);
      while (LL flow = dfs(S, T))
        total += flow;
    }
    return total;
  }
};

int main() {
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- ) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        if( a*n == m*b ) {
            int s = n+m, t = s+1;
            dinic F(n+m+2);
            int cnt = 0;
            for( int i = 0; i < n; i++ ) {
                F.add_edge( s, i, a );
                cnt++;
            }
            for( int i = 0; i < m; i++ ) {
                F.add_edge( n+i, t, b );
                cnt++;
            }
            cnt *= 2;
            for( int i = 0; i < n; i++ ) {
                for( int j = 0; j < m ; j++ ) {
                    F.add_edge( i, n+j, 1 );
                }
            }
            if( F.max_flow(s, t) == n*a ) {
                cout << "YES\n";
                for( int i = cnt, temp = 0; i < F.E.size(); i+=2 ) {
                    cout << F.E[i].flow;
                    temp++;
                    if( temp == m ) { cout << '\n'; temp = 0; }
                }
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}