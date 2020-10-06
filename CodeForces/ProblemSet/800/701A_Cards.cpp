#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin>>n;
    pair<int, int> arr[n];
    for (int i = 1; i <= n; i++){
        pair<int, int> p;
        cin>>p.first;
        p.second=i;
        arr[i-1]=p;
    }

    sort(arr,arr+n);

    for (int i = 0; i < n/2; i++)
    {
        cout<<arr[i].second<<' '<<arr[n-i-1].second<<endl;
    }
    



    return 0;
}