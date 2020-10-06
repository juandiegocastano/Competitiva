#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int freq[256] = {0};
    for (int i = 0; i < n; i++)
        freq[s[i]]++;

    int max_freq = 0;
    for (int i = 0; i < 256; i++)
        max_freq = max(max_freq, freq[i]);
    
    if(max_freq > k)
        cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}