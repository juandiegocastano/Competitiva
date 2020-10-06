#include <bits/stdc++.h>
#define f first
#define s second

using namespace std;
typedef long long ll;


const ll oo=1e18;

pair<ll,ll> s(ll a, ll b, int op){
    pair<ll,ll> ans={a,b};
    if(op==1) ans=make_pair(b,a);
    return ans;
}

int main(){

    int t; cin>>t;
    int d1[8]={ 0,1,0,1,0,1,0,1 };
    int d2[8]={ 0,0,1,1,0,0,1,1 };
    int d3[8]={ 0,0,0,0,1,1,1,1 };

    while(t--){
        ll a1,b1,a2,b2,a3,b3; cin>>a1>>b1>>a2>>b2>>a3>>b3;

        ll b,h, ans=oo;

        ll ta1=a1,tb1=b1,ta2=a2,tb2=b2,ta3=a3,tb3=b3;

        for (int i = 0; i < 8; i++)
        {
            pair<ll,ll> uno = s(ta1,tb1,d1[i]);
            pair<ll,ll> dos = s(ta2,tb2,d1[i]);
            pair<ll,ll> tres = s(ta3,tb3,d1[i]);

            b=max( uno.f,dos.f+tres.f);
            h=b1+max(dos.s,tres.s);
            ans=min(ans, b*h);

            b=max(uno.s,dos.s);
            b=max(b,tres.s);
            h=uno.f+dos.f+tres.f;
            ans=min(ans,b*h);

            b=uno.s+tres.s;
            h=uno.f+dos.f;
            ans=min(ans,b*h);
            
        }

        ta1=a1,tb1=b1,ta2=a3,tb2=b3,ta3=a2,tb3=b2;
                for (int i = 0; i < 8; i++)
        {
            pair<ll,ll> uno = s(ta1,tb1,d1[i]);
            pair<ll,ll> dos = s(ta2,tb2,d1[i]);
            pair<ll,ll> tres = s(ta3,tb3,d1[i]);

            b=max( uno.f,dos.f+tres.f);
            h=b1+max(dos.s,tres.s);
            ans=min(ans, b*h);


            b=max(uno.s,dos.s);
            b=max(b,tres.s);
            h=uno.f+dos.f+tres.f;
            ans=min(ans,b*h);

            b=uno.s+tres.s;
            h=uno.f+dos.f;
            ans=min(ans,b*h);
            
        }
        ta1=a2,tb1=b2,ta2=a1,tb2=b1,ta3=a2,tb3=b2;
                for (int i = 0; i < 8; i++)
        {
            pair<ll,ll> uno = s(ta1,tb1,d1[i]);
            pair<ll,ll> dos = s(ta2,tb2,d1[i]);
            pair<ll,ll> tres = s(ta3,tb3,d1[i]);

            b=max( uno.f,dos.f+tres.f);
            h=b1+max(dos.s,tres.s);
            ans=min(ans, b*h);


            b=max(uno.s,dos.s);
            b=max(b,tres.s);
            h=uno.f+dos.f+tres.f;
            ans=min(ans,b*h);

            b=uno.s+tres.s;
            h=uno.f+dos.f;
            ans=min(ans,b*h);
            
        }
        ta1=a2,tb1=b2,ta2=a3,tb2=b3,ta3=a1,tb3=b1;
                for (int i = 0; i < 8; i++)
        {
            pair<ll,ll> uno = s(ta1,tb1,d1[i]);
            pair<ll,ll> dos = s(ta2,tb2,d1[i]);
            pair<ll,ll> tres = s(ta3,tb3,d1[i]);

            b=max( uno.f,dos.f+tres.f);
            h=b1+max(dos.s,tres.s);
            ans=min(ans, b*h);


            b=max(uno.s,dos.s);
            b=max(b,tres.s);
            h=uno.f+dos.f+tres.f;
            ans=min(ans,b*h);

            b=uno.s+tres.s;
            h=uno.f+dos.f;
            ans=min(ans,b*h);
            
        }
        ta1=a3,tb1=b3,ta2=a2,tb2=b2,ta3=a1,tb3=b1;
                for (int i = 0; i < 8; i++)
        {
            pair<ll,ll> uno = s(ta1,tb1,d1[i]);
            pair<ll,ll> dos = s(ta2,tb2,d1[i]);
            pair<ll,ll> tres = s(ta3,tb3,d1[i]);

            b=max( uno.f,dos.f+tres.f);
            h=b1+max(dos.s,tres.s);
            ans=min(ans, b*h);


            b=max(uno.s,dos.s);
            b=max(b,tres.s);
            h=uno.f+dos.f+tres.f;
            ans=min(ans,b*h);

            b=uno.s+tres.s;
            h=uno.f+dos.f;
            ans=min(ans,b*h);
            
        }
        ta1=a3,tb1=b3,ta2=a1,tb2=b1,ta3=a2,tb3=b2;
                for (int i = 0; i < 8; i++)
        {
            pair<ll,ll> uno = s(ta1,tb1,d1[i]);
            pair<ll,ll> dos = s(ta2,tb2,d1[i]);
            pair<ll,ll> tres = s(ta3,tb3,d1[i]);

            b=max( uno.f,dos.f+tres.f);
            h=b1+max(dos.s,tres.s);
            ans=min(ans, b*h);


            b=max(uno.s,dos.s);
            b=max(b,tres.s);
            h=uno.f+dos.f+tres.f;
            ans=min(ans,b*h);

            b=uno.s+tres.s;
            h=uno.f+dos.f;
            ans=min(ans,b*h);
            
        }

        cout<<ans<<endl;

    }
    

    
    return 0;
}