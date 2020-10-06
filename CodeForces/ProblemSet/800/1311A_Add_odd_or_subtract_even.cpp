#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    
    while(n--){
        int a,b; cin>>a>>b;
        int mA=a%2,  mB=b%2, ans=0;

        if(a>b){
            if( (mA==0 && mB==0) || (mA==1 && mB==1) ) ans=1; else ans=2;
        } else if(a<b){
            if( (mA==0 && mB==0) || (mA==1 && mB==1) ) ans=1; else ans=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}