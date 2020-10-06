#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;
typedef long long ll;
vector<ll> ans;



int main() {
    int t; cin >> t;

    while(t--) {
        ll n, x, y; 
        cin >> n >> x >> y;

        ll range = y - x, last=0;
        ans.clear();

        if(n != 2) {

            for (int i = 1; i < n; i++)
            {
                if(range % i == 0) {
                    last = i;
                } 
            }
            // cout << "hh" << endl;
            // DBG(last);

            ll interval = range / last;

            for (int i = x; i <= y; i+= interval)
            {
                ans.push_back(i);
            }

            ll cont = last + 1;
            for (int i = x; i > 0 && cont < n; i-=interval)
            {
                if(i != x){
                    ans.push_back(i);
                    cont++;
                }
            }

            int i = y + interval;
            while(cont < n) {
                ans.push_back(i);
                cont++;
                i+=interval;
            }

            for(int each: ans)
                cout << each << ' ';
            cout << endl;
        } else cout << x << ' ' << y << endl;

    
    }
    
    return 0;
}