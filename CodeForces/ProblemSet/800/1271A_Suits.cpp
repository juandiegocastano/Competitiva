#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a,b,c,d,e,f, ans; cin>>a>>b>>c>>d>>e>>f;

    if(f>=e){
        ans=min(b,c);
        ans=min(ans,d);
        b-=ans;
        c-=ans;
        d-=ans;
        ans*=f;

        long long ans2=min(a,d);
        ans+=ans2*e;

    } else{
        long long ans2=min(a,d);
        a-=ans2;
        d-=ans2;
        ans2*=e;

        ans=min(b,c);
        ans=min(ans,d);

        ans*=f;
        ans+=ans2;

    }


    cout<<ans<<endl;


    return 0;
}