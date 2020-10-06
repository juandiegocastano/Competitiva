#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);

        // for (int i = 0; i < n; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        


        int yaSalieron=0, subgrupo=1, req=a[0];
        for (int i = 0; i < n; i++)
        {
            if(a[i]<=i+1) {
                yaSalieron+=subgrupo;
                // cout<<"i: "<<i<<"  "<<a[i]<<endl;
                // cout<<"Subgrupo: "<<subgrupo<<endl;
                // cout<<"yaSlieron: "<<yaSalieron<<"\n\n";
                subgrupo=1;
                // cout<<"Cond 1: "<<req<<"\n\n";
            } else subgrupo++;
        }
        cout<<yaSalieron+1<<endl;
        
        
    }
    return 0;
}