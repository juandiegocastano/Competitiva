#include <bits/stdc++.h>

using namespace std;
const int MX=100;
int a[MX];
bool check(int s){
    int neg=0, pos=0;

    for (int i = 0; i < s-1; i++)
    {
        if(a[i+1]-a[i]<0) neg++;
        if(a[i+1]-a[i]<0) pos++;
    }
    if(neg==pos) return true; else return false;
}

bool solve(int i, int s){
    if(check(s)==true) return true;
}

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        memset(a,0, sizeof a);
        for (int i = 0; i < n; i++) cin>>a[i];



        for(auto i: a) cout<<i<<' ';
        cout<<endl;
        
    }
    return 0;
}