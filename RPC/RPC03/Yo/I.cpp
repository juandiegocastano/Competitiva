#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{

    int n; cin >> n;

    int ballons [n], elio [n];

    for (int i = 0; i < n; i++)
    {
        cin >> elio[i];
        ballons[i]=i+1;
    }

    sort(elio, elio+n);

    double minCap=1;
    bool isImpossible = false;

    for (int i = 0; i < n; i++)
    {
        // cout<<double(elio[i])/double(ballons[i])<<"\n";
        if(ballons[i]<elio[i]){
            isImpossible=true;
        } else {
            if( (double(elio[i])/double(ballons[i])) <minCap) minCap=(double(elio[i])/double(ballons[i]));
        }
    }


    if(isImpossible) cout<<"impossible"; else cout<<minCap;
    


    return 0;
}