#include<bits/stdc++.h>
#define ll long long int
 #define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int n; cin >> n; 
    string a; cin >> a;
    ll ans = 0; 
    for(auto i : a){
        ans +=(i- '0');
    }
    cout << ans << '\n';
    return 0;
}