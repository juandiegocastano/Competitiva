#include <bits/stdc++.h>
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;

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



        

    }

    return 0;
}