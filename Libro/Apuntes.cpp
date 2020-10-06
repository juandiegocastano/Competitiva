#include <bits/stdc++.h>
// Suppress some compilation warning messages (only for VC++ users)
#define _CRT_SECURE_NO_DEPRECATE
// Shortcuts for "common" data types in contests
typedef long long ll; // comments that are mixed in with code
typedef pair<int, int> ii; // are aligned to the right like this
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000 // 1 billion, safer than 2B for Floyd Warshall’s
// Common memset settings
memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
memset(arr, 0, sizeof arr); // to clear array of integers
// We have abandoned the use of "REP" and "TRvii" since the second edition
// in order to reduce the confusion encountered by new programmers

// The following shortcuts are frequently used in both our C/C++ and Java code:
ans = a ? b : c; // to simplify: if (a) ans = b; else ans = c;
ans += val; // to simplify: ans = ans + val; and its variants
index = (index + 1) % n; // index++; if (index >= n) index = 0;
index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
int ans = (int)((double)d + 0.5); // for rounding to nearest integer