#include <bits/stdc++.h>
#define DEBUG2(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        string words[n];
        int freq[256] = {0};
        for (int i = 0; i < n; i++)
            cin >> words[i];
        for (string word: words)
        {
            for(char letter: word) {
                freq[letter]++;
            }
        }

        bool ans = true;

        for (int i = 0; i < 256; i++)
        {
            if(freq[i] % n != 0)
                ans = false;
        }

        if(ans)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
        
        
    }



    return 0;
}