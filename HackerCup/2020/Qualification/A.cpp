#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<char> line;


void dfs(int v) {
    visited[v] = true;
    line[v]='Y';
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}

int main() {
    int t; cin>>t;

    for(int x=1; x<=t; x++){
        cout<<"Case #"<<x<<":"<<endl;
        int N; cin>>N;
        string I,O;
        cin>>I>>O;
        string ans[N];
        adj.resize(N);
        visited.resize(N);
        adj.clear();

        for (int i = 0; i < N-1; i++)
        {
            if(O[i]=='Y' && I[i+1]=='Y') {
                adj[i].push_back(i+1);
            }
            if(I[i]=='Y' && O[i+1]=='Y') {
                adj[i+1].push_back(i);
            }
        }

        line.resize(N);
        for (int i = 0; i < N; i++)
        {
            fill(line.begin(), line.end(), 'N');

            fill(visited.begin(), visited.end(), false);
            // for (char each: visited) {
            //     if(!each) cout<<"F"; 
            //     else cout<<"T";
            //     }

            dfs(i);

            for (char each: line) cout<<each;
            cout<<endl;
            
        }

        // for(auto each: ans) cout<<each<<endl;

        // Print graph
        // for (int i = 0; i < N; i++)
        // {
        //     cout<<"----"<<i<<": "<<endl;
        //     for(auto each: adj[i]){
        //         cout<<each<<' ';
        //     }
        //     cout<<endl;
        // }
        
    }
    return 0;
}