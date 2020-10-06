#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c; cin>>n>>c;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    
    int sum=1, actual;
    for (int i = 1; i < n; i++)
    {
        actual=arr[i-1];
        if(arr[i]-actual<=c){
            sum++;
        } else sum=1;
    }
    cout<<sum<<endl;
    
    
    return 0;
}