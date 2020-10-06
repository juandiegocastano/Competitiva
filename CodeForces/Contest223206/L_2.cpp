#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, serja=0, dima=0; cin>>n;
    cin.ignore();
    int vec [n];
    

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }

    int left=0, right=n-1, val=0;
    bool dimasTurn=true;

    for (int i = 0; i < n; i++)
    {
        // cout<<"val: "<<val<<"\n";
        if(vec[left]>vec[right]){
            val = vec[left];
            left++;
        } else {
            val = vec[right];
            right--;
        }
        if(dimasTurn){
            dima+=val;
            dimasTurn=false;
            // cout<<"dima"<<dima<<"\n";
        } else {
            serja+=val;
            dimasTurn=true;
            // cout<<"serja: "<<serja<<"\n";
        }
    }
    cout<<dima<<" "<<serja;


    
    

    return 0;
}