#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, serja, dima; cin>>n;
    cin.ignore();
    vector<int> vec;
    

    for (int i = 0; i < n; i++)
    {
        cin>>dima;
        vec.push_back(dima);
        dima=0;
    }

    int left, right, val;

    for (int i = 0; i < n; i++)
    {
        if(vec[0]>vec.back){
            val = vec[0];
            vec.erase(0);
        }
    }
    
    

    return 0;
}