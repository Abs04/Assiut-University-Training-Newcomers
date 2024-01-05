#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll x, y, z, s, k, ans = 0;
    cin >> k >> s;
    for(x = 0; x <= k; x++)
    {
        for(y = 0; y <=k; y++)
        {
            z = s - x - y;
            if(z>= 0 && z <= k)
            {
                ans++;
            }
            
        }
    }
    cout << ans <<"\n";
    return 0;
}