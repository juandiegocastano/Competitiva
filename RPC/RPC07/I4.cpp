#include<bits/stdc++.h>

#define si(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define sc(a) scahf("%c",&a);
#define ss(a) scanf("%s",a)
#define pi(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pc(a) putchar(a)
#define ms(a) memset(a,0,sizeof(a))
#define repi(i, a, b) for(register int i=a;i<=b;++i)
#define repd(i, a, b) for(register int i=a;i>=b;--i)
#define reps(s) for(register int i=head[s];i;i=Next[i])
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define pii pair<int,int>
#define pll pair<long,long>
#define pil pair<int,long>
#define pli pair<long,int>
#define lowbit(x) ((x)&(-(x)))
#define ce(i, r) i==r?'\n':' '
#define pb push_back
#define fi first
#define se second
#define pr(x) cout<<#x<<": "<<x<<endl
using namespace std;

inline int qr() {
    int f = 0, fu = 1;
    char c = getchar();
    while (c < '0' || c > '9') {
        if (c == '-')fu = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        f = (f << 3) + (f << 1) + c - 48;
        c = getchar();
    }
    return f * fu;
}

const int N = 1e5 + 10;
int n, pos[N], T;
ll t[N];

inline ll ask(int x) {
    ll res = 0;
    for (; x; x -= lowbit(x))res += t[x];
    return res;
}

inline void add(int x, int y) {
    for (; x <= n; x += lowbit(x))t[x] += y;
}

int main() {
    T = qr();
    while (T--) {
        n = qr();
        ms(t);
        repi(i, 1, n) {
            int x = qr();
            pos[x] = i, add(i, x);
        }
        ll all = (1ll * (1 + n) * n) >> 1;
        ll ans = ask(pos[1] - 1);
        ans = min(ans, all - ans);
        add(pos[1], -1), all--;
        repi(i, 2, n - 1) {
            ll pl = ask(pos[i - 1]), pn = ask(pos[i] - 1);
            ans += pos[i] > pos[i - 1] ? min(pn - pl, all - pn + pl) : min(all - pl + pn, pl - pn);
            add(pos[i], -i), all -= i;
        }
        pl(ans);
    }
    return 0;
}