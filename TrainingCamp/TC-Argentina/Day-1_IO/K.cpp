#include <bits/stdc++.h>
using namespace std;
// int freq[256];

void solve(string sfun){
    // char init = sfun[0];
    vector<char> ans;
    ans.push_back(sfun[0]);
    bool check = true;

    for (int i = 1; i < sfun.size()-1; i++)
    {
        if(check){
            ans.push_back(sfun[i]);
            if(sfun[i]==sfun[i+1] ){
                // cout<<i<<endl;
                check=false;
            } 
        } check=true;
    }

    for(auto each: ans) cout<<each;
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        // memset(freq, 0, sizeof freq);
        solve(s);
    }
    

    return 0;
}