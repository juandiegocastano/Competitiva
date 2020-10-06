#include <bits/stdc++.h>
using namespace std;
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)


int main() {
    int n; cin >> n;
    int arr[n], prefix_sum[n+1];
    vector<int> neg_freq(1000000, 0);
    vector<int> pos_freq(1000000, 0);
    prefix_sum[0] = 0;
    pos_freq[0]++;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefix_sum[i+1] = prefix_sum[i]+arr[i];
        // DBG(prefix_sum[i+1]);
        if(prefix_sum[i+1] < 0)
            neg_freq[prefix_sum[i+1]]++;
        else pos_freq[prefix_sum[i+1]]++;

    }

    int ans = 0;


    for (int i = 0; i < neg_freq.size(); i++)
    {
        if(neg_freq[i] > 1)
            ans += (neg_freq[i] - 1) * (neg_freq[i]) / 2;
    }

    for (int i = 0; i < pos_freq.size(); i++)
    {
        if(pos_freq[i] > 1){
            // DBG(i);
            // DBG(pos_freq[i]);
            ans += (pos_freq[i] - 1) * pos_freq[i] / 2;
        }
    }
    
    cout << ans << endl;
    


    return 0;
}