#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int odd1=0, even1=0, odd2=0, even2=0;
    while(n--) {
        int val; cin >> val;
        if(val % 2 == 0)
            even1++;
        else odd1++;
    }

    while(m--) {
        int val; cin >> val;
        if(val % 2 == 0)
            even2++;
        else odd2++;
    }
    int ans=0;
    ans += min(odd1, even2); 
    ans += min(odd2, even1); 
    cout << ans << endl;
    

    return 0;
}