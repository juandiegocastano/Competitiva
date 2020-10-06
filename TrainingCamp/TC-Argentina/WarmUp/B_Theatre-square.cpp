#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a; cin>>n>>m>>a;
    long long ans=0;
    ans+=n/a; if(n%a!=0) ans++;
    if(m%a==0) ans*=m/a; else ans*=(m/a)+1;
    cout<<ans<<endl;
    return 0;
}