#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin>>t;

    while (t--)
    {
        long long a,b,k;cin>>a>>b>>k;
        long long dif=a-b;
        long long ans=dif*(k/2);
        if(k%2!=0) ans+=a;
        cout<<ans<<endl;
    }
    

    return 0;
}