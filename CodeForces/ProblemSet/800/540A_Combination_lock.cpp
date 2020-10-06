#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; string a,b; cin>>n>>a>>b;

    int ans=0;
    for (int i = 0; i < n; i++)
    {
        // cout<<ans<<endl;
        ans+=min( abs(a[i]-b[i]), 10-max(a[i],b[i])+min(a[i],b[i]) );
    }

    cout<<ans<<endl;
    return 0;
}
