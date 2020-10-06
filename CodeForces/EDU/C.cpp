#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e18;

struct segtree {
    int size;
    vector<long long> mins;

    void init(int n){
        size = 1;
        while(size < n) size *= 2;
        mins.assign(2 * n, 0LL);
    }

    void set(int i, int v, int x, int lx, int rx) {
        if(rx - lx == 1) {
            mins[x] = v;
            return;
        }
        int m = (lx + rx) / 2;

        if(i < m) set(i, v, 2 * x + 1, lx, m);
        else set(i, v, 2 * x + 2, m, rx);

        mins[x] = min(mins[2 * x + 1], mins[2 * x + 2]);
    }

    void set(int i, int v) {
        set(i, v, 0, 0, size);
    }

    long long minimum(int l, int r, int x, int lx, int rx) {
        if(rx <= l || lx >= r) return oo;
        if(lx >= l && rx <= r) return mins[x];
        int m = (lx + rx) / 2;
        long long min1 = minimum(l, r, 2 * x + 1, lx, m);
        long long min2 = minimum(l, r, 2 * x + 2, m, rx);

        return min(min1, min2);
    }

    long long minimum(int l, int r) {
        minimum(l, r, 0, 0, size);
    }
};

int main() {

    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    segtree st;
    st.init(n);

    for (int i = 0; i < n; i++)
    {
        int val; 
        cin >> val;
        st.set(i, val);
    }
    

    while(m--) {
        int op;
        cin >> op;
        if(op == 1){
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        } else {
            int l, r;
            cin >> l >> r;
            cout << st.minimum(l, r) << endl;
        }
    }

    return 0;
}