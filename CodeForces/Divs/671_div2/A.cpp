#include <bits/stdc++.h>
#define DEBUG2(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool p1 = false, p2 = false;
        for (int i = 0; i < n; i++)
        {
            if((s[0] - 48) % 2 == 0)
                p2 = true;
            else p1 = true;
        }

        if(n % 2 == 1) {
            if(p1)
                cout << 1 << endl;
            
        }
        
    }

    return 0;
}