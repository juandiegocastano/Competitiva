#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e6+5;
bool sieve[MX];
vector<int> primes;



void gen_sieve() {
    memset(sieve, true, sizeof sieve);
    sieve[0] = sieve[1] = false;
    for (ll i = 2; i < MX; i++)
    {
        if(sieve[i]) {
            primes.emplace_back(i);
            for (ll j = i * i ; j < MX; j+=i)
                sieve[j] = false;
        }
    }
    
}

int main() {
    int t; cin >> t;
    gen_sieve();
    // cout << primes.size() << endl;
    while(t--) {
        ll L, R; cin >> L >> R;

        if(L == 1) L++;
        
        vector<bool> block(R - L + 1, true);

        for(ll p: primes) {
            if(p * p <= R) {
                ll start = ( L / p ) * p;
                if(start < L) start += p;

                for (ll i = start; i <= R; i+=p)
                {
                    if(i != p)
                        block[i-L] = false;
                }
            }

            

        }

        for (int i = 0; i < block.size(); i++)
        {
            if(block[i]) {
                cout << L + i << endl;
            }
        }
        cout << endl;

    }
    
    return 0;
}