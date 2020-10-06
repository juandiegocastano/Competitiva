#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    int t; cin>>t;
    while(t--){
        int n,d; cin>>n>>d;
        ll arr[n+1];
        memset(arr, 0, sizeof arr);
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
        ll min=arr[1], max=arr[1];
        priority_queue<ll> q;

        for (int j = 1; j <= d || j<=n; j++)
        {
            if(arr[j]>=max) {
                max=arr[j];
            } else if(arr[j]<min) {
                min=arr[j];
            }
        }

        for (int i = 1; i <= n; i++)
        {

            
        }
        
    }

    

    return 0;
}