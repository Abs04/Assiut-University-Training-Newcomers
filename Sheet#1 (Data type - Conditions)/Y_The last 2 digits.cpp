#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll a, b , c, d , ans, temp; cin >> a >> b >> c >> d;
    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    ans = (a*b*c*d);
    temp = (ans/10)%10;
    ans = (a*b*c*d)%100;
    if(temp == 0)
    {
        cout << "0";
    }
    cout << ans << "\n";
    
    return 0;

}