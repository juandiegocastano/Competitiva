#include <bits/stdc++.h>
#define DBG(x) cerr << #x << " = " << (x) << endl
#define fori(i,a,b)               for(int i=a;i<b;i++) 


const int INF = 1e9;

using namespace std;

int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, 1, 0, -1};

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n+1, 0);
        int dist[n+1][82];
        memset(dist, -1, sizeof dist);
        for (int i = 1; i <= n; i++) cin >> a[i];
        
        pair<int, int> source, target;
        cin >> source.first >> source.second;
        cin >> target.first >> target.second;
        dist[source.first][source.second] = 0;

        queue<pair<int, int>> q;
        q.push(source);
        while(!q.empty()) {
            int x = q.front().first, y = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int mx = x + dx[i], my = y + dy[i];
                if( !(mx <= 0 || mx > n) ) {
                    if(my < 0 && mx != 1 ) {
                        mx -= 1; my = a[mx];
                        }
                    else if(my > a[mx] ) {
                        if(mx != n ) {mx += 1; my = 0;}
                        else my = a[mx];
                    }
                    // DBG(mx); DBG(my);
                    if(dist[mx][my] == -1) {
                        // q.push({mx, my});
                        q.emplace(mx, my);
                        dist[mx][my] = dist[x][y] + 1;
                        // DBG(dist[mx][my]);
                    }
                }
            }

            
        }
        
        cout << dist[target.first][target.second] << endl;


    }

    return 0;
}