#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin>>t;

    while(t--){

        int n; cin>>n;
        int vec[n+1];
        int seen[n+1];

        for (int i = 1; i <= n; i++)
        {
            cin>>vec[i];
            seen[i]=1;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                if(vec[j]>vec[i]) {
                    // cout<<"entro: i: "<<i<<" j:"<<j<<endl;
                    // cout<<"seen[j] antes: "<<seen[j]<<endl;
                    seen[j]=max(seen[j], seen[i]+1);
                    // cout<<"seen[j] deps: "<<seen[j]<<endl<<endl;
                    }
            }
            
        }

        for(auto i: seen) cout<<i<<endl;
        
           
    }
    return 0;
}