#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, r; cin >> b >> r;
    int field[b];
    memset(field, 0, sizeof field);

    while(r--) {
        int h, v, c; 
        cin >> h >> v >> c;
        c--;
        int maxi = 0;
        for (int i = c; i < c + h; i++)
        {
            maxi = max(maxi, field[i]);
        }
        for (int i = c; i < c + h; i++)
        {
            field[i] = maxi + v;
        }  
    }
    int ans = 0;
    for (int i = 0; i < b; i++)
        ans = max(ans, field[i]);
    
    cout << ans << endl;
    




    return 0;
}