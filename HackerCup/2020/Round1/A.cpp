#include <bits/stdc++.h>
const int mod = 1000000007;

using namespace std;

int main() {
    int t; cin >> t;
    for (int x = 1; x <= t; x++)
    {
        cout << "Case #" << x << ": ";
        int n, k, w; cin >> n >> k >> w;
        int L[n], H[n], P[n];
        for (int i = 0; i < k; i++) cin >> L[i];

        int AL, BL, CL, DL;
        cin >> AL >> BL >> CL >> DL;

        for (int i = 0; i < k; i++) 
            cin >> H[i];

        int AH, BH, CH, DH;
        cin >> AH >> BH >> CH >> DH;

        for (int i = k; i < n; i++)
        {
            L[i] = ((AL * L[i-2] + BL * L[i-1] + CL) % DL) + 1;
            H[i] = ((AH * H[i-2] + BH * H[i-1] + CH) % DH) + 1;
        }

        P[0] = 2 * H[0] + 2 * w;
        long long acum = P[0];

        int range[w], increase[w]; 
        // increase[0] = H[0] + 1;
        range[0] = H[0];
        for (int i = 1; i < w; i++) {
            range[i] = H[0];
            // increase[i] = 1;
            }
        
        

        for (int i = 1; i < n; i++)
        {
            long long conflict = 0;
            int diff = (L[i-1] + w) - L[i];
            if(diff < 0) {
                P[i] = P[i-1] + 2 * H[i] + 2 * w;
                acum += P[i];
                // increase[0] = H[i] + 1;
                range[0] = H[i];
                for (int j = 1; j < w; j++) {
                    range[j] = H[i];
                    // increase[j] = 1;
                    }
            } else 
            if(diff == 0) {
                P[i] = P[i-1] - H[i-1] + abs(H[i-1] - H[i]) + 2 * w + H[i];
                range[0] = H[i];
                for (int j = 1; j < w; j++) {
                    range[j] = H[i];
                    // increase[j] = 1;
                    }
            } 
            else {
                for (int j = 0; j < w-diff; j++)
                {
                    range[j] = max(H[i], range[j+diff]);
                    // increase[j] = increase[j+diff];
                    // if(range[j] <= H[i]) {
                    //     range[j] = H[i];
                    // }
                }
                for (int j = diff; j < w; j++)
                {
                    range[j] = H[i];
                }
                
                
            }
        }
        
        
        

    }
    




    return 0;
}