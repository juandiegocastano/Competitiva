#include <bits/stdc++.h>

using namespace std;

string to_lower(string a){
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]<97) a[i]+= 32;
    }
    return a;   
}

int main(){

    string a,b;
    getline(cin, a);
    getline(cin, b);

    a = to_lower(a);
    b = to_lower(b);

    int res;

    if(a<b) res=-1; 
    else if(a>b) res=1;
    else res=0;

    cout<<res<<endl;

    return 0;
}