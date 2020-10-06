#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin>>t;

    while(t--){
        int n, x; cin>>n>>x;
        int vec[n];

        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }

        long long sum=0;
        

        int pos1, pos2=0, ans=0;

        bool termino = false;
        for (int i = 0; i < n-1; i++)
        {

            for (int j = i; j < n && !termino; j++)
            {
                sum+=vec[j];
                if(sum%x != 0){
                    ans=max(ans,j-i);
                    cout<<i<<" j :"<<j<<' '<<ans<<" sum"<<sum<<endl;
                }  

                if(j=n) termino=true; 
            }

            sum-=vec[i];
                cout<<i<<" i :"<<i<<' '<<ans<<" sum"<<sum<<endl;
            if(sum%x != 0){
                ans=max(ans,n-i);
            }
            

        }

        if(ans==0) ans=-1;

        cout<<ans<<endl;   
    }
    return 0;
}