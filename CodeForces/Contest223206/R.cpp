#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{

    int mini = 0, maxi = 0, n;
    cin >> n;
    int vec [n];

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (vec[i] <= vec[mini])
        {
            mini = i;
            // cout<<"MINN"<<"\n";
        }

        if (vec[i] > vec[maxi])
        {
            maxi = i;
            // cout<<"MAXX"<<"\n";
        }
        // cout<<"i: "<<i<<"\n";
        // cout << "maxi: " << maxi << "\n";
        // cout << "mini: " << mini << "\n\n";
    }

    if (mini < maxi) cout <<maxi + n -2- mini; else {
        cout <<maxi + n -1- mini;
    }

    return 0;
}