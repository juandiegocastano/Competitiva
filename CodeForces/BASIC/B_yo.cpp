#include<bits/stdc++.h>
using namespace std;
const int tam = 1000000;
typedef pair<long long, long long> llp;


int main(){
    int n; cin>>n;
    vector< vector< int> > G(n);
    long long meetingTimes[n], in[n] ={0};

    for (int i = 0; i < n; i++)
    {
        int size;
        cin>>meetingTimes[i]>>size;
        G[i].resize(size);
        for (int j = 0; j < size; j++)
        {
            cin>>G[i][j];
            G[i][j]--;
            in[ G[i][j] ]++;
        }
    }
    priority_queue < llp, vector<llp>, greater<llp> > q;

    for (int i = 0; i < n; i++)
    {
        if(in[i]==0) {
            // cout<<i<<" ";
            q.push( make_pair(meetingTimes[i], i) ); }
    }

    long long ans=0;

    for (int pos = n-1; pos >=0 ; pos--)
    {
        // cout<<q.top().second<<"\n";
        assert( !q.empty() );
        long long temp = q.top().second;

        ans = max(ans, meetingTimes[temp]+pos);
        q.pop();
        for (int i: G[temp])
        {
            // cout<<i<<" hola";
            in[i]--;
            if(in[i]==0) q.push( make_pair(meetingTimes[i] ,i));
        }
    }
    cout<<ans<<endl;
    
    // // Imprimir grafo
    // for (int i = 0; i < G.size(); i++){
    //     cout<<i<<"       ";
    //     for (int j = 0; j < G[i].size(); j++) //&& !q.empty()
    //     {
    //         cout<<G[i][j]<<" ";
    //     }

    //     cout<<"    i: "<<in[i]<<"\n";
    // }    

    return 0;
}