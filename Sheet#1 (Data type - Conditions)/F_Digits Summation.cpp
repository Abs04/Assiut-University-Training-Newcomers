#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll m , n; cin >> n >> m; 
    m %=10;
    n %=10;
    cout << n+m << '\n';
    return 0;
}