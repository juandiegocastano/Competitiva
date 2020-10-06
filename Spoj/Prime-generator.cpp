#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e6+5;
vector<bool> is_prime;
vector<int> primes;

/*
--> PRIME GENERATOR: https://www.spoj.com/problems/PRIME1/
--> Prob description: Print all primes between L and R, but
L and R are very big, but R-L < 1e5.
--> Solution: Segmented sieve.
*/

void sieve(int n) {
    is_prime.assign(n, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2;  i < n; i++)
    {
        if(is_prime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j < n; j+=i)
            {
                is_prime[j] = false;
            }
            
        }
    }
    // cout << primes.size();
}

void solve(ll L, ll R) {

    if(L == 1) L++;
    int tam = R - L + 1;

    vector<bool> block(tam, true);


    for(ll p: primes) {
        if(p * p <= R) {
            ll start = ( L / p) * p;
            if(start < L) start += p;

            for (ll i = start; i <= R; i+=p)
                if( i != p)
                    block[i-L] = false;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        if(block[i])
            cout << L + i << endl;
    }
    
}

int main() {
    int t; cin >> t;
    sieve(100000);
    while(t--) {
        ll L, R; cin >> L >> R;
        solve(L, R);
    }



    return 0;
}