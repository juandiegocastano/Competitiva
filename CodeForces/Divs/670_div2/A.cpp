#include <bits/stdc++.h>
#define DBG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
typedef long long ll;
const int MX = 1e6+5;
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int arr[n];
        set<int> s, s2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(s.count(arr[i]))
                s2.insert(arr[i]);
            else s.insert(arr[i]);
        }

        int val1 = 0, val2 = 0;
        int cont = 0;
        while(!s.empty()) {
            // DBG(*s.begin());
            if(*s.begin() == cont)
                {val1 = *s.begin();
                val1++;
                }
            cont++;
            s.erase(s.begin());
        }
        // DBG(val1);
        cont = 0;
        while(!s2.empty()) {
            // DBG(*s2.begin());
            if(*s2.begin() == cont) {
                val2 = *s2.begin();
                val2++;
                }
            cont++;
            s2.erase(s2.begin());
        }
        // DBG(val2);

        // val1++;
        // bool termino = false;

        // sort(arr, arr+n);

        // for (int i = 0; i < n && !termino; i+=2)
        // {
        //     // DBG(i);
        //     if(arr[i] == arr[i+1])
        //         {val2 = arr[i];
        //         val2++;}
        //     else termino = true;
        // }
        // if(val2 != 0)
        //     val2++;

        cout << val1 + val2 << endl;
        
        
    }


    return 0;
}