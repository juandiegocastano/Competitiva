#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin>>n;
    int vec[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(vec[i]==2) {
            sum++;
        } else sum--;
    }
    
    

    cout<<"h"<<endl;
    
    

    return 0;
}