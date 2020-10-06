#include <bits/stdc++.h>

using namespace std;

bool check(int vec[], int s){
    int neg=0, pos=0;

    for (int i = 0; i < s-1; i++)
    {
        if(vec[i+1]-vec[i]<0) neg++;
        if(vec[i+1]-vec[i]<0) pos++;
    }
    if(neg==pos) return true; else return false;
}

// void solve(int i, int vec[], int s){
//     int temp[s];
//     temp=vec;
//     if(check(vec,s)==true)
// }

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++) cin>>a[i];
        
        for (int i = n-1; i>=0; i--)
        {
            if(check(a, n)==true) break;
            for (int j = n-1; j>=0; j--)
            {
                a[j]*=-1;
                if(check(a, n)==true) break; 
                else a[j]*=-1;
            }
            
        }

        for(auto i: a) cout<<i<<' ';
        cout<<endl;
        
    }
    return 0;
}