#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a , b , c, d; cin >> a >> b >> c >> d;
    double ac = b * log(a);
    double cc = d * log(c);
    if(ac > cc) 
    {
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
    return 0;
}