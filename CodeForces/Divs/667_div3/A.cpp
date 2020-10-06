#include <bits/stdc++.h>
#define DEBUG2(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;
typedef long long ll;



int main() {
    int t; cin >> t;

    while(t--) {
        ll a, b; cin >> a >> b;
        ll ans = 0;
            ans += abs(a-b) / 10;
            if(abs(a-b) % 10 != 0)
                ans++;

        cout << ans << endl;
    }
    
    return 0;
}