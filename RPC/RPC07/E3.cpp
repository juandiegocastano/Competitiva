#include <bits/stdc++.h>
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;

using namespace std;
int bfs(int r, int c) {

}

int main() {
    int n; cin >> n;
    while(n--){
    
    int source = 0; //Cualquier nodo
    queue<int> q;
    q.push(source);
    vector<int> dist(n, -1);
    dist[source] = 0;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for (int v: g[u] ) {
            if (dist[v] == -1) {
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
        
    }
        

    }

    return 0;
}