#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    long long prev=1, actual=1;

    for (int i = 1; i <= n; i++)
    {
        if(i==actual){
            cout<<"O";
            long long temp=actual;
            actual+=prev;
            prev=temp;
        } else cout<<"o";
        

    }
    

    return 0;
}