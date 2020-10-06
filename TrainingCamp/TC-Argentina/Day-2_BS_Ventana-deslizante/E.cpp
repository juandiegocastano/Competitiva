#include <bits/stdc++.h>
using namespace std;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define RAYA cerr << "===============================" << endl

int main(){
    long long n,x; cin>>n>>x;
    int arr[n];
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        // int a; cin>>arr[i];
        long long a; cin>>a;
        sum+=a;
    }
    int ans=0;
    if(sum!=0){
        if(abs( abs(sum)-x   )%x==0 ) ans=abs(sum)/x;
        else ans=(abs(sum)/x)+1;
    }

    cout<<ans<<endl;
    return 0;
}