#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int vec [3];

    for (int i = 0; i < 3; i++)
    {
        cin>> vec[i];
    }
    sort(vec,vec+3);

    cout<<(vec[1]-vec[0])+(vec[2]-vec[1]);
    
    


    return 0;
}