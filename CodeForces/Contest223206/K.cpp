#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int isPrime(long long n) 
{ 
    // Corner case 
    if (n <= 1) 
        return 0; 
  
    // Check from 2 to n-1 
    for ( long long i=2; i*i <= n; i++ )
        if (n % i == 0) 
            return 0; 
  
    return 1; 
} 
 
int main()
{
    // n: # test cases
    // q: query
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long n, q, prev = 0, actual = 1, temp;
     scanf("%lld", &n);
 
    int vec[50];
    vec[0] = 0;
    vec[1] = 0;
    
    //Fill boolean vector fibo
    for (int i = 2; i < 50; i++)
    {
        temp = actual;
        actual += prev;
        prev = temp;

        // printf("%lld ", actual); //TEST: Imprime fibonacci para ver si hay overflow

        if(isPrime(actual)) vec[i]=1; else vec[i]=0;
    }
    
 
    //Queries
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &q);
        if(vec[q-1]){
            printf("prime\n");
        } else printf("not prime\n");
    }
    
 
    return 0;
}