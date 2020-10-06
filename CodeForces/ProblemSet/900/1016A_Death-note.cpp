#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int curr_line = 0, ans[n];
    for (int i = 0; i < n; i++)
    {
        curr_line += a[i];
        if(curr_line >= m) {
            ans[i] = curr_line / m;
            curr_line %= m;
        } else ans[i] = 0;
    }

    for(int each: ans)
        cout << each << ' ';

    cout << endl;
    
    return 0;
}