#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,n1,n2,n3, count=0; cin>>n;

    while(n--){
        cin>>n1>>n2>>n3;
        if(n1+n2+n3>=2) count++;
    }
    cout<<count;
    return 0;
}