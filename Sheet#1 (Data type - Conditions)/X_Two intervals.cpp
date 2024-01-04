#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll l1, l2, l3, r1, r2, r3; 
    cin >> l1 >> r1 >> l2 >> r2;
    if(l2 > r1 || l1 > r2)
    {
        cout << -1 << "\n";
    }
    else{
        l3 = max(l1, l2);
        r3 = min(r1 , r2);
        cout << l3 << " " << r3 << "\n";
    }
    return 0;
}