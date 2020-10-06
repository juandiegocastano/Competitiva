#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int arr[n];
        int sum=0, prod=1,ans=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0) {
                ans++;
                arr[i]++;
            }
            sum+=arr[i];
        }
        if(sum==0){
            ans++;
        }

        cout<<ans<<endl;


        
    }
    
    return 0;
}