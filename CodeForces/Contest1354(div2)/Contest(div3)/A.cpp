#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main(){

    int n; cin>>n;

    for (int i = 0; i < n; i++)
    {
        int a,b; cin>>a>>b;

        int c,d;

        if(a==b){
            cout<<a*b*4<<"\n";
        } else if(a>b){
            c=2*b;
            d=a;
            if(c>=d){
                cout<<c*c<<"\n";
            } else cout<<a*a<<"\n";
        } else {
            c=2*a;
            d=b;
            if(c>=d){
                cout<<c*c<<"\n";
            } else cout<<d*d<<"\n";
        }
        
    }
    

// (c+d)*
    return 0;
}