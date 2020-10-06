#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin>>n>>k;
    int solved=0, sum=0;

    for (int i = 1; i <= n; i++)
    {
        sum+=5*i;
        if(sum>240-k) break;
        solved++;
            
    }

    cout<<solved<<endl;
    
    

    return 0;
}