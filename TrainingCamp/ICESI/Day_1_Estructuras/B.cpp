#include <bits/stdc++.h>

using namespace std;

int main(){

    int a; cin>>a;
    set<int> s;

    while(a--){
        int op; cin>>op;
        s.insert(op);
    }

    int num = *s.begin();
    if(s.size()>1) cout << *s.upper_bound(num)<<endl;
    else cout<<"NO"<<endl;
    
 
    return 0;
}