#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, amount, insat=0; cin>>n>>amount;
    cin.ignore();

    for(int i=0; i<n; i++){
        string b;
        int num;
        cin>>b>>num;
        cin.ignore();
        if(b=="-"){
            if(amount>=num){
                amount-=num;
            } else insat++;
        }
        else amount+=num;
    }
    cout<<amount<<' '<<insat;
    return 0;
}