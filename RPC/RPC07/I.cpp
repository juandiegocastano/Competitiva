#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;

struct segtree {

    int size;
    vector<long long> sums;

    void init(int n) {
        size = 1;
        while(size < n) size *= 2;
        sums.assign(2 * size, 0LL);
    }

    int find(int value, int x, int l, int r) {
        if(r == l) return l;
        int m = (r + l) / 2;
        int left_value = sums[2 * x + 1];
        if(value <= left_value) {  
            find(value, 2 * x + 1 , l, m);
        } else find(value - left_value, 2 * x + 2, m + 1 , r); 

    }
    
    int find(int value) {
        return find(value, 0, 0, size);
    }

    
    void set(int i, int v, int x, int lx, int rx) {
        if(rx == lx) { 
            sums[x] = v;
            return;
        }
        int m = (rx + lx) / 2;
        if(i < m) {
            set(i, v, 2 * x + 1, lx, m);
        } else {
            set(i, v, 2 * x + 2, m + 1, rx);
        }
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];

    }

    void set(int i, int v) {
        set(i, v, 0, 0, size);
    }


    long long sum(int l,int r, int x, int lx, int rx) {   
        if(r < lx  || rx > l ) return 0;
        if(lx <= l && r <= rx) return sums[x];
        int m = (lx + rx) / 2;
        long long s1 = sum(l, r, 2 * x , lx, m);
        long long s2 = sum(l, r, 2 * x + 1, m + 1, rx);

        return s1 + s2;

    }

    long long sum(int l, int r) {
        return sum(l, r, 0, 0, size);
     }
};

int main() {

    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--) {
        int n; //Size of array and # of operations
        cin >> n;

        segtree st1, st2; //st1 sums, st2 indexes
        st1.init(n);
        st2.init(n);
        pair<int, int> a[n];
        long long score_acum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
            st1.set(i, a[i].first);
            st2.set(i, 1);
        }

        int ptr = 0;

        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            long long top_sum = INF, bottom_sum = INF;
            if(ptr < a[i].second) {
                top_sum = st1.sum(ptr, a[i].second);
                bottom_sum = st1.sum(0, n) - top_sum;
            }
            else {
                bottom_sum = st1.sum(a[i].second, ptr);
                top_sum = st1.sum(0, n) - bottom_sum;
            }
            score_acum += min(top_sum, bottom_sum);
            st1.set(a[i].second, 0);

            long long value = st2.sum(0,a[i].second) + 1;
            if(value > st2.sum(0, n)) {
                value -= st2.sum(0, n);
            }
            ptr = st2.find(value);
            st2.set(a[i].second, 0);
        }
        
        cout << score_acum << endl;
    }

    
    return 0;
}