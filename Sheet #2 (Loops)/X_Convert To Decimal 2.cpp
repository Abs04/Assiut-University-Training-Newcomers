#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        int x, res = 0;
        x = __builtin_popcount(n);
        for(int i = 0; i <x; i++)
        {
            res += pow(2, i);
        }
        cout << res << endl;
    }
    return 0;
}