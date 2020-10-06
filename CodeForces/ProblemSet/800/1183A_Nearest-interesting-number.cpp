#include <bits/stdc++.h>

using namespace std;

int check(int s){
    int sum=0;
    while(s>0){
        sum+=s%10;
        s/=10;
    }
    return sum;
}

int main(){
    int s; cin>>s;
    while(check(s)%4 != 0){
        s++;
    }
    cout<<s<<endl;
    return 0;
}