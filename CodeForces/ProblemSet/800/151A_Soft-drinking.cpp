#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int slices=c*d;
    int bottles=k*l;

    int ans=0;
    bool termino=false;

    while(!termino){
        int tbot=bottles-n*nl;
        int tsalt=p-n*np;
        int tslices=slices-n;
        if(tbot>=0 && tsalt>=0 && tslices>=0) {
            ans++;
            bottles=tbot;
            p=tsalt;
            slices=tslices;
        }
        else termino=true;
    }

    cout<<ans<<endl;

    return 0;
}