#include<bits/stdc++.h>
#define ll long long int
// #define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--){
    int n; cin >> n; 
    int a[n+2];
    ll ans = INT_MAX;
    ll temp = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            temp = a[i] + a[j] + (j - i);
            ans = min(ans ,temp);
        }
    }
    cout << ans << '\n';
    }
    return 0;
}