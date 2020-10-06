#include <bits/stdc++.h>
using namespace std;
const int tam = 1000000;
vector<vector<int>> g(tam);
bool used[tam];
typedef pair<long long, long long> ll;

long long t[tam];
int in[tam];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, cant; cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>> t[i]>>cant;
        g[i].resize(cant);
        for (int j = 0; j < cant; j++)
        {
            cin>>g[i][j];
            g[i][j]--;
            in[ g[i][j]]++;
        }
    }

    priority_queue< ll, vector<ll>, greater<ll> > q;
    for (int i = 0; i < n; i++)
    {
        if(!in[i])
            q.push( make_pair(t[i],i) );
    }
    
    long long ans = 0;

        
    // // Imprimir grafo
    // for (int i = 0; i < g.size(); i++){
    //     cout<<i<<"       ";
    //     for (int j = 0; j < g[i].size(); j++) //&& !q.empty()
    //     {
    //         cout<<g[i][j]<<" ";
    //     }
    //     cout<<"    i: "<<in[i]<<"\n";
    // }


    for (int len = n-1; len >= 0; len--)
    {
        assert( !q.empty() );
        long long temp = q.top().second;
        q.pop();
        ans = max(ans, len+t[temp]);
        for (int i: g[temp] ) {
            in[i]--;

            if( in[i]==0 ) q.push( make_pair(t[i],i) );
        }  
    }
    cout<< ans<< '\n';
    return 0;
}