#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    long long ans = 0;

    sort(a, a+n);

    for (int i = 0; i < n/2; i++)
    {
        ans += pow(a[i] + a[n-1-i], 2);
    }

    cout << ans << endl;
          
    return 0;
}