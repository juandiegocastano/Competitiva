#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k; cin>>n>>k;
    int pos=k;

    int vec [n];

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];

    }

    int posCero=0;

    if(vec[0]==0) pos=0; else if(vec[k-1]==0){
        for (int i = k-1; i>=0; i--)
        {
            if(vec[i]==0) posCero=i;
        }
        
    }
    bool termino = false;

    if(posCero==0){
        for (int i = k; i < n && !termino && pos!=0; i++)
        {
            if(vec[i]>=vec[k-1]) pos=i+1;
        }
    } else pos=posCero;

    cout<<pos;

    return 0;
}