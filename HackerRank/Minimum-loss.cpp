#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;


int main() {
    int n; cin >> n;
    pair<long long, int> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;

    }
    sort(a, a+n);
    long long ans = 1e18;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i].second > a[i+1].second)
            ans = min(ans, a[i+1].first - a[i].first);
    }

    cout << ans << endl;
    
    return 0;
}