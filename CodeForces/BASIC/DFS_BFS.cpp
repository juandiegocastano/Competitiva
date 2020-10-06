#include <bits/stdc++.h>
using namespace std;

//Normal
void DFS(int node, vector<vector<int>> &G, vector<bool> &used){
    used[node] = true;
    cout<<node<<'\n';
    for (int i = 0; i < G[node].size(); i++)
    {
        if(!used[G[node][i]]) 
            DFS(G[node][i], G, used);
    }
    
}


//Mejora sintaxis for
//Con int i: G[node]
// void DFS(int node, vector<vector<int>> &G, vector<bool> &used){
//     used[node] = true;
//     cout<<node<<'\n';
//     for (int i: G[node])
//     {
//         if(!used[i]) 
//             DFS(i, G, used);
//     }
    
// }

void BFS(int start, vector<vector<int>> &G, vector<bool> &used){
    queue<int> Q;
    Q.push( start );
    used[start] = true;
    while( !Q.empty() ) {
        int curr = Q.front();
        cout<<curr<<'\n';
        Q.pop();
        for (int i : G[curr])
        {
            if(!used[i]){
                Q.push(i);
                used[i] = true;
            }
        }
        
    }
}

int main(){
    vector< vector<int> > G(10);
    vector<bool> used(10, false);

    G[0].push_back(1);
    G[0].push_back(2);
    G[1].push_back(5);
    G[2].push_back(6);
    G[4].push_back(7);
    G[3].push_back(8);
    G[5].push_back(9);
    G[4].push_back(3);
    G[2].push_back(4);

    BFS(0,G,used);
   
    return 0;
}