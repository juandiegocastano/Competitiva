#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;
vector<vector<int>> G, Gr, Gc;
vector<int> used, who, tin, low;
stack<int> s;
int timer;
bool exist_bridge;

void dfs1(int v) {
    used[v] = true;
    for(int u: G[v]) {
        if(!used[u])
            dfs1(u);
    }
    s.push(v);
}

void dfs2(int v, int comp) {
    used[v] = true;
    who[v] = comp;
    for(int u: Gr[v]) {
        if(!used[u])
            dfs2(u, comp);
    }
}

void dfs3(int v, int p = -1) {
    used[v] = true;
    tin[v] = low[v] = timer++;
    for (int to : Gc[v]) {
        if (to == p) continue;
        if (used[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs3(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v])
                // IS_BRIDGE(v, to);
                cout << "exist" << endl;
                exist_bridge = true;
        }
    }
}

int main() {
    int n, m; cin >> n >> m;
    exist_bridge = false;
    G.resize(n);
    Gr.resize(n);
    who.resize(n);
    Gc.resize(n);
    int a, b, t;
    cin >> a >> b >> t; m--;
    while(m--) {
        cin >> a >> b >> t;
        a--; b--;
        G[a].push_back(b);
        Gr[b].push_back(a);
        if(t == 2){
            G[b].push_back(a);
            Gr[a].push_back(b);
        }
    }

    used.assign(n, false);
    for (int i = 0; i < n; i++)
        if(!used[i])
            dfs1(i);

    used.assign(n, false);
    int comp = 0;
    while(!s.empty()) {
        int v = s.top(); s.pop();
        if(!used[v]) {
            dfs2(v, comp);
            comp++;
        }
    }

    for (int i = 0; i < n; i++) {   
        // if(who[i] == i)
            for(auto & v: G[i]) {
                if(who[i] != who[v]) { 
                    DBG(i);
                    DBG(who[v]);
                    DBG(who[i]);
                    Gc[who[i]].push_back(who[v]);
                    Gc[who[v]].push_back(who[i]);
                }
            }
    }

    sort(who.begin(), who.end());
    if(who[n-1] == who[0]) {
        cout << '-' << endl;
    } else {

        timer = 0;
        used.assign(n, false);
        tin.assign(n, -1);
        low.assign(n, -1);
        for (int i = 0; i < n; ++i) {
            if (!used[i])
                dfs3(i);
        }


        if(exist_bridge) 
            cout << '2' << endl;
        else cout << '1' << endl;
    }

    

    for(int each: who)
        cout << each << ' ';
    cout << "Nuevo Grafo -->" << endl;
    for (int i = 0; i < Gc.size(); i++)
    {
        cout << "Size: " << Gc[i].size() << endl;
        for (int each: Gc[i]) {
            cout << i << ' ' << each << endl;
            // cout << eaize()ch.s << endl;
        }
    }
    
    

    return 0;
}