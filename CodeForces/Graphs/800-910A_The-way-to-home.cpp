#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d; cin >> n >> d;
    string s; cin >> s;
    int jumps = 0, current = 0, flag = 0;

    while(current < n - 1 && flag == 0) {
        flag = -1;
        for (int i = current + d; i > current; i--)
        {
            if(s[i] == '1') {
                // cout << "entreo" << endl;
                jumps++;
                current = i;
                flag = 0;
                // cout << current << endl;
                break;
            }
        }
        
    }
    if(flag == 0)
        cout << jumps << endl;
    else cout << flag << endl;
    
    return 0;
}
