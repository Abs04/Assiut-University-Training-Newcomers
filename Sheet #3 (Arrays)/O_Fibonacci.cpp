#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll fibo[50+1];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 50; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int n;
    cin >> n;
    cout << fibo[n - 1] << '\n';

    return 0;
}