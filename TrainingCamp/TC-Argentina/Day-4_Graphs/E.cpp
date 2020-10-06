#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define DBG(x) cerr << #x << " = " << (x) << endl
#define RAYA cerr << "===============================" << endl

int main(){

    ll n, m; cin>>n>>m;
    ll ans=0;
    if(m<=n) ans=n-m;
    else{
        priority_queue<ll, vector<ll>, greater<ll> > tar_list;

        tar_list.push(m);



        while(!tar_list.empty()){

            ll target=tar_list.top();
            DBG(target);
            if(target%2==0){
                target/=2;
            } else target=(target/2)+1;
            // tar_list.push(target);

            cout<<"despues  :";
            DBG(target);

            if(n*2>=target){
            DBG(target);
                ans+= 1 + (2*n) - target;
                DBG(ans);

                n=target;
                tar_list.pop();
            } 
        }

    }

    cout<<ans<<endl;
    return 0;
}