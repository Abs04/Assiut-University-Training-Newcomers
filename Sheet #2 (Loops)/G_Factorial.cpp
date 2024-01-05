#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t; cin >>t; 
    while(t--){
        ll n;  cin >> n; 
        ll ans = 1;
        for(ll i = 1; i <= n; i++){
            ans *= i;
        }
        cout << ans << '\n';
    }

    return 0;
}