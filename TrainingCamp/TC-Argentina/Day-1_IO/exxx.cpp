#include <bits/stdc++.h>
using namespace std;
#define DBG(x) cerr<<#x<<"="<<(x)<<endl;

int main(){
    int ans=0;
    for (int i = 1; i <= 6; i++)
    {
        ans+=i;
    }

    DBG(ans);
    return 0;
}