#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)

using namespace std;

// long long binpow(long long a, long long b) {
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a;
//         a = a * a;
//         b >>= 1;
//     }
//     return res;
// }

int main() {
    int n; cin >> n;
    long long nums[n];

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums, nums+n);

    long long target = nums[n-1], aim = 1;

    bool termino = false;

    long long power_aim, diff;

    long long ans1=0, ans2=0;
    while(!termino) {
        power_aim = pow(aim, n-1);  
        if(power_aim > target) {
            termino = true;
            // ans2 += power_aim;
        }
        aim++;     
    }
    aim--;
    // DBG(aim);
    long long powers[n];
    powers[0] = 1;
    ans2 += abs(powers[0] - nums[0]);


    for (int i = 1; i < n; i++)
    {
        // DBG(i);
        // cout << pow(aim,i) << endl;
        // ans1 += abs(pow(aim-1,i) - nums[i]);
        powers[i] = powers[i-1] * aim;
        ans2 += abs(powers[i] - nums[i]);
    }

        // DBG(ans1);
        // DBG(ans2);
    cout << ans2 << endl;
    // cout << min(ans2, ans1) << endl;
    // cout << min(ans2, ans1) << endl;


    




    



    return 0;
}