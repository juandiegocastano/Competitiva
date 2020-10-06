#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
const int MX = 1e5+20;

struct segtree {

    int n, t[4 * MX];

    void build(int a[], int v, int tl, int tr) {
        if(tl == tr) t[v] = a[tl];
        else {
            int tm = (tr + tl) >> 1;
            build(a, 2 * v, tl, tm);
            build(a, 2 * v + 1, tm + 1, tr);
            t[v] = t[2 * v] + t[2 * v + 1]; 
        }
    }

    int sum(int l, int r) {
        return sum(1, 0, n - 1, l, r);
    }

    int sum(int v, int tl, int tr, int l, int r) {
        if(l > r) return 0;
        if(l == tl && r == tr) return t[v];

        int tm = (tr + tl) >> 1;
        return sum(2 * v, tl, tm, l, min(r, tm))
            + sum(2 * v + 1, tm + 1, tr, max(l, tm + 1), r);
    }

    void update(int pos, int val) {
        update(1, 0, n - 1, pos, val);
    }

    void update(int v, int tl, int tr, int pos, int new_val) {
        if(tl == tr) t[v] = new_val;
        else {
            int tm = (tr + tl) >> 1;
            if(pos <= tm)
                update(2 * v, tl, tm, pos, new_val);
            else 
                update(2 * v + 1, tm + 1, tr, pos, new_val);
            t[v] = t[2 * v] + t[2 * v + 1];
        }
    }    
    
    int find(int value, int v, int l, int r) {
        if(r == l) return l;
        int m = (r + l) >> 1;
        int left_value = t[2 * v];
        if(value <= left_value) {  
            find(value, 2 * v, l, m);
        } else find(value - left_value, 2 * v + 1, m + 1 , r); 

    }
    
    int find(int value) {
        return find(value, 1, 0, n - 1);
    }

};

int main() { 
ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--) {
        int n; //Size of array and # of operations
        cin >> n;

        segtree st1, st2; //st1 sums, st2 indexes
        st1.n = n;
        st2.n = n;
        pair<int, int> a[n];
        int b[n], c[n];
        long long score_acum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
            b[i] = a[i].first;
            c[i] = 1;
        }
        st1.build(b, 1, 0, n - 1);
        st2.build(c, 1, 0, n - 1);

        // cout << st2.find(2) << endl;

        int ptr = 0;

        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            long long top_sum = INF, bottom_sum = INF;

            if(ptr <= a[i].second) {
                top_sum = st1.sum(ptr, a[i].second-1);
                bottom_sum = st1.sum(0, n-1) - top_sum;
            }
            else {
                bottom_sum = st1.sum(a[i].second, ptr-1);
                top_sum = st1.sum(0, n-1) - bottom_sum;
            }
            score_acum += min(top_sum, bottom_sum);
            st1.update(a[i].second, 0);

            long long value = st2.sum(0,a[i].second-1) + 1;
            if(value > st2.sum(0, n-1)) {
                value -= st2.sum(0, n-1);
            }
            ptr = st2.find(value);
            st2.update(a[i].second, 0);
        }
        
        cout << score_acum << endl;
    }


    return 0;
}