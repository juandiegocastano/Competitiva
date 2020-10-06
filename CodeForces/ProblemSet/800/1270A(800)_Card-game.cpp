#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n, k1, k2; cin>>n>>k1>>k2;
        priority_queue<int> f,s;
        while(k1--) {
            int val; cin>>val;
            f.push(val);
            }        
        while(k2--) {
            int val1; cin>>val1;
            s.push(val1);
            }

        while(!s.empty() && !f.empty()){
            int p1=f.top();
            int p2=s.top();
            if(p1>p2){
                s.pop();
                f.push(p2);
            } else{
                f.pop();
                s.push(p2);   
            }
        }

        if(s.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}