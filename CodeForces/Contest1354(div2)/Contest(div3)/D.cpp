#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++)
    {
        long long n, k;
        cin >> n >> k;
        if (n <= k)
        {
            cout << 1 << "\n";
        } else if(k==1) cout << n << "\n";
        else {
 
            bool termino = false;
            for (long long j = 1; j<n+1 && !termino && j*j<=n; j++)
            {
                if( (n%j==0) && ( (n/j)<=k ) ){
                    cout<<j<<"\n";
                    termino=true;
                }
            }
 
        }
 
    }
 
    return 0;
}