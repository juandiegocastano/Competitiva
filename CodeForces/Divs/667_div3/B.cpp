#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;
typedef long long ll;



int main() {
    int t; cin >> t;

    while(t--) {
        ll a, b, x, y, n; 
        cin >> a >> b >> x >> y >> n;

        ll n1 = a-x;
        ll n2 = b-y;
        ll n3 = max(x, a-n);
        ll n4 = max(y, b-n);
        ll a1, a2;
        if(n3 <= n4) {
            if(n3 != x) {
                a1 = n3;
                a2 = b;
            } else {
                a1=x;
                a2=max(b- (n-n1), y);
            }
        } else {
            if(n4 != y) {
        // cout << "aca" << endl;
                a1 = a;
                a2 = n4;
            } else {
                a1=max(a- (n-n2), x);
                a2=y;
            }
        }

        cout << a1*a2 << endl;
        // DBG(a1);
        // DBG(a2);
    }
    
    return 0;
}