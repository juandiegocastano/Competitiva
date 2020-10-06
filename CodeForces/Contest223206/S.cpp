#include <bits/stdc++.h>
#include <typeinfo>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{

    int n, k; cin >> n >>k;
    string vec [n], kvec [k+1];

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }


    for (int i = 0; i < k+1; i++)
    {
        kvec[i]=i;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        string temp [k+1];
        copy(kvec, kvec+(k+1),temp);

        for (int j = 0; j < vec[i].length(); j++)
        {
            if(vec[i][j])
        }
        
    }
    
    



    return 0;
}