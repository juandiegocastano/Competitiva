#include <bits/stdc++.h>

using namespace std;

int main(){

    int q; cin>>q;
    while(q--){
        int n; cin>> n;
        int arr[n],ans, sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        if(sum%n==0) ans=sum/n;
        else ans=(sum/n)+1;

        cout<<ans<<endl;
        
    }

    return 0;
}