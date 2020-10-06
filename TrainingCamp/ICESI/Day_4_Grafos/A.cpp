#include <bits/stdc++.h>
using namespace std;

const int tam=1e5+5;
const int oo=1e9;
const long long S= 2e5+1;

vector<vector<int>> g;

int n,k;

int dfs(int u, int p){
    int len=1;
    for(int v: g[u]) {
        if(v == p) continue;
        len+= dfs(v);
    }

    return len;
}

 

int main(){

    cin>>n>>k; 
    g.resize(n+1);

    for (int i = 1; i <= n-1; i++)
    {
        int a,b; cin>>a>>b;
        g[a].push_back(b);
    }

    // for(auto i: g[1]) cout<<i<<' '; 
    cout<<endl;
    cout<<dfs(1,-1)<<endl;

    // int out[n+1]; //Out degree

    // cout<<out[0];
    // memset(out, 0, sizeof out);
    
    // out[1]++; //Raiz

    // for(int i=2; i<=n; i++){
    //     // out[i]=g[i].size()-1;
    //     cout<<g[i].size()-1<<endl;
    // }

    // // for(auto each: out) cout<<each<<endl;



    return 0;

}