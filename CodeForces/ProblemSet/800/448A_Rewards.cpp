#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int a=a1+a2+a3;
    int b=b1+b2+b3;
    if(a%5==0) a/=5;
    else{ a/=5; a++;}    
    
    if(b%10==0) b/=10;
    else{ b/=10; b++;}

    if(a+b<=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}