#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
 
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
 
    if (n1 == 1 && n2 == 1 && n3 == 1)
    {
        cout << n1 + n2 + n3;
    }
    else if (n1 == 1)
    {
        if (n2 == 1)
        {
            cout << (n1 + n2) * n3;
        }
        else if (n3 == 1)
        {
            cout << (n1 + n3) + n2;
        }
        else
            cout << (n1 + n2) * n3;
    }
    else if (n2 == 1)
    {
        if (n3 == 1)
        {
            cout << (n2 + n3) * n1;
        }
        else if (n3 >= n1)
        {
            cout << (n2 + n1) * n3;
        }
        else
            cout << (n2 + n3) * n1;
    }
    else if (n3 == 1)
    {
        cout << (n3 + n2) * n1;
    }
    else
        cout << (n3 * n2) * n1;
 
    return 0;
}