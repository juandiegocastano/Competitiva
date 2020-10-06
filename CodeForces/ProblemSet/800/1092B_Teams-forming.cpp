#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    pair<int,int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }

    sort(arr,arr+n);
    int sum=0;

    for (int i = 0; i < n; i+=2)
    {
        sum+=abs(arr[i].first-arr[i+1].first);
    }
    
    cout<<sum<<endl;


    
    
    
    return 0;
}