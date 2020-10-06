#include <bits/stdc++.h>
#define DEBUG2(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
using namespace std;

int main() {
    int n, m, r;
    cin >> n >> m >> r;
    int s[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(s, s+n);
    sort(b, b+m);

    if(s[0] >= b[m-1])
        cout << r << endl;
    else {
        int stocks = 0, gain = 0;
        stocks = r / s[0];
        gain = (b[m-1] - s[0]) * stocks;
        cout << r + gain << endl;
    }
    
    
    

    return 0;
}