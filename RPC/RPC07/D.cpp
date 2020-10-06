#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin>>n;
    while(n--) {
        int t, s; cin>>t>>s;
        long long actual, siguiente; cin >> siguiente;
        long long ans=0;
        if(t!=1) {
            for (int i = 1; i < s; i++)
            {
                actual=siguiente;
                cin>>siguiente;
                // cout<<"i:"<<i<<" "<<ans<<endl;
                if(actual==t) actual=1; else actual+=1;

                if(siguiente <= actual) {
                    if((actual)-siguiente <= t-(actual)+siguiente){
                // cout<<"i1:"<<i<<" "<<ans<<endl;
                        ans += actual-siguiente;
                    } else {ans+= t-actual+siguiente;
                // cout<<"i2:"<<i<<" "<<ans<<endl;
                }
                } else {
                    if(siguiente-(actual) <= t-siguiente+actual) {

                // cout<<"i3:"<<i<<" "<<ans<<endl;
            // cout<<"sig: "<<siguiente<<endl;
            // cout<<"act: "<<actual<<endl;
            // cout<<"nnnnnn-"<< siguiente-(actual)<<endl;
                        ans += siguiente-(actual);
                    } else {ans += t-siguiente+actual;
                // cout<<"i4:"<<i<<" "<<ans<<endl;
                }
                }
            }

        }

        cout<<ans<<endl;
        
    }

    return 0;
}