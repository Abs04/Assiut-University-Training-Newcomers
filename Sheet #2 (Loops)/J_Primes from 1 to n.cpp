#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n = 10000;
    int prime[n];
    for(int i = 2; i < n; i++)
    {
        prime[i] = i;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] != 0 && (ll)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;
        }
    }
    int k ; cin >> k;
    for(int i = 2; i <= k; i++)
    {
        if( prime[i] !=0)
        {
            cout << prime[i] << " ";
        }
    }
    cout << endl;
    return 0;
}