#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int vec[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    int min=max(vec[0], vec[2]);
    int day=0;

    for (int i = 0; i < n-2; i++)
    {
        if(max(vec[i], vec[i+2])<min ){
            min=max(vec[i], vec[i+2]);
            day=i;
        }
    }
    day++;

    cout<<day<<' '<<min<<endl;
    
    

    
    return 0;
}