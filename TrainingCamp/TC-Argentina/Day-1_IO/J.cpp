#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d; cin>>n>>d;
    int a,b; cin>>a>>b;
    pair<int,int> cost[n];

    for (int i = 0; i < n; i++)
    {
        int x,y; cin>>x>>y;
        cost[i].first=x*a + y*b;
        cost[i].second=i+1;
    }

    sort(cost, cost+n);

    bool termino = false;

    vector<int> ans;
    int cont=0;

    for (int i = 0; i < n && !termino; i++)
    {
        if(cost[i].first<=d){
            ans.push_back(cost[i].second);
            d-=cost[i].first;
            cont++;
        } else termino=true;
    }

    cout<<cont<<endl;
    for(auto each: ans) cout<<each<<' ';
    cout<<endl;

    
    return 0;
}