#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 2147483647;
    for (int i = 0; i < n-3; i++)
    {
        // DBG(i);
        int val = 0;
        // DBG(s[i]-'A');
        // DBG('Z'-s[i]+1);
        val += min(abs(s[i] - 'A'), ('Z' - s[i]) + 1 + ('A' - 'A'));
        // DBG(val);
        val += min(abs(s[i+1] - 'C'), ('Z' - s[i+1]) + 1 + ('C' - 'A'));
        // DBG(val);
        val += min(abs(s[i+2] - 'T'), (s[i+2] - 'A') + 1 + ('Z' - 'T'));
        // DBG(val);
        val += min(abs(s[i+3] -'G'), ('Z' - s[i+3]) + 1 + ('G' - 'A'));
        // DBG(val);
        ans = min(ans, val);
    }
    cout << ans << endl;

    

    return 0;
}