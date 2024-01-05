#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t = 1; cin >> t;
    int n, positive = 0, negative = 0, even = 0, odd = 0; 
    while(t--)
    {
        cin >> n; 
        if(n  > 0){positive++;}
        if(n < 0){negative++;}
        (n%2 == 0)? even++ : odd++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd , positive, negative);
    

    return 0;
}