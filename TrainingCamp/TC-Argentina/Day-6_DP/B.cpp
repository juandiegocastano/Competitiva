#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1,x2,x3,x4; cin>>x1>>x2>>x3>>x4;
    int mx=x1;
    if(mx<x2) mx=x2;
    if(mx<x3) mx=x3;
    if(mx<x4) mx=x4;

    int a,b,c;
    if(mx==x1){
        a=mx-x3;
        b= mx-x2;
        c=mx-x4;      
    } else 
    if(mx==x2){
        a=mx-x3;
        b= mx-x4;
        c=mx-x1;      
    } else 
    if(mx==x3){
        a=mx-x4;
        b= mx-x2;
        c=mx-x1;      
    } else {
        a=mx-x3;
        b= mx-x2;
        c=mx-x1;      
    } 
    

    cout<<a<<' '<<b<<' '<<c<<endl;


    return 0;
}