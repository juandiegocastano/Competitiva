#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    for (int p = 1; p <= t; p++)
    {
        cout<<"Case #"<<p<<":";

        int n; cin>>n;
        string a; cin>>a;
        long long freq[2];
        memset(freq, 0, sizeof freq);
        char ans='N';

        for (int i = 0; i < n; i++)
        {
            if(a[i]=='A') freq[0]++;
            else if(a[i]=='B') freq[1]++;
        }
        if( (freq[0]-1) == freq[1]) ans='Y';
        if((freq[1]-1) == freq[0]) ans='Y';
        
        cout<<ans<<endl;
    }
    return 0;
}