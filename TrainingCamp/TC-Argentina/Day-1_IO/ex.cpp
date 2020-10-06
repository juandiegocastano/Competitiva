#include <bits/stdc++.h>
using namespace std;

int main(){

    int v[] = {1,3,10,15,-4};
    int V[6];
    V[0]=0;
    for (int i = 1; i < 6; i++)
    {
        V[i]=V[i-1]+v[i-1];
    }
    for(auto each: V) cout<<each<<' ';
    cout<<endl;
    cout<<V[4]-V[1];
    

    return 0;
}