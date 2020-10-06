#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
typedef long long ll;
const int MX = 1e6+5;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> arr;
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            int val; cin >> val;
            if(val == 0)
                zeros++;
            else arr.push_back(val);        }

        sort(arr.begin(), arr.end());
        long long ans = 1;
        if(n - zeros < 5) {
            ans = 0;
        }
        else {
            n = arr.size();
            long long temp = arr[n-5] * arr[n-4] * arr[n-3] * arr[n-2] * arr[n-1];
            temp = max(temp, arr[0] * arr[n-4] * arr[n-3] * arr[n-2] * arr[n-1]);
            temp = max(temp, arr[0] * arr[1] * arr[n-3] * arr[n-2] * arr[n-1]);
            temp = max(temp, arr[0] * arr[1] * arr[2] * arr[n-2] * arr[n-1]);
            temp = max(temp, arr[0] * arr[1] * arr[2] * arr[3] * arr[n-1]);
            temp = max(temp, arr[0] * arr[1] * arr[2] * arr[3] * arr[4]);
            if(temp < 0 && zeros != 0)
                ans = 0;
            else ans = temp;
        }

        cout << ans << endl;
        

    }


    return 0;
}