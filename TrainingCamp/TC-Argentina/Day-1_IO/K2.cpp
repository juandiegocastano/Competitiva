#include <bits/stdc++.h>
using namespace std;
// int freq[256];

void solve(string sfun){
    char first = sfun[0];
    char last = sfun[sfun.size()-1];
    if(sfun.size()>2){
        cout<<first;
        for (int i = 2; i < sfun.size()-1; i+=2)
        {
            cout<<sfun[i];
        }
        cout<<last<<endl;
        
    } else cout<<first<<last<<endl;

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