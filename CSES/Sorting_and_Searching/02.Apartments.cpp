#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    long long sizes[n], desired[m];

    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        sizes[i] = x;
    }

    for (int i = 0; i < m; i++) {
        long long x; cin >> x;
        desired[i] = x;
    }
    
    sort(sizes, sizes + n);
    sort(desired, desired + m);

    int ans = 0, cont = 0;
    for (int i = 0; i < m; i++)
    {
        if(cont >= n) break;
        if(sizes[i] < desired[cont]) {
            if(sizes[i] + k >= desired[cont]) {
                ans++;
                cont++;
            }
        } else {
            if(sizes[i] - k <= desired[cont]) {
                ans++;
                cont++;
            }
        }
    }
    

    return 0;
}