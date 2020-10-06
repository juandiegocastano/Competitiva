#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long a,b, ans; cin>>a>>b;
        if(a==b) ans=0;
        else{
            if(a<b){
                if(a%2==0){
                    if(b%2==0){
                        ans=2;
                    } else {
                        ans=1;
                    }
                } else {
                    if(b%2==0){
                        ans=1;
                    } else ans=2;
                }

            } else {
                if(a%2==0){
                    if(b%2==0){
                        ans=1;
                    } else {
                        ans=2;
                    }
                } else {
                    if(b%2==0){
                        ans=2;
                    } else ans=1;
                }

            }
        }
        cout<<ans<<endl;
    }
    

    return 0;
}