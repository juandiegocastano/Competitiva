#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+20;

int folder[N], n, k;

int main(){

    cin >> n >> k;
    int sum_folder = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>folder[i];
        sum_folder +=folder[i];
    }

    int low = 1, high = sum_folder;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(ok(mid)) high = mid-1;
        else low = mid+1;
    }
    
}