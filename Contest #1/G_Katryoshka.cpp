#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll eye, mouth, body; cin >> eye >> mouth >> body; 
    ll ans = 0;
    ll mn = min({mouth, body, eye});
    ans += mn; 
    eye -= mn; 
    body -= mn;
    mouth -= mn; 
    ans += min(eye/2, body);
    cout << ans << '\n';
    return 0;
}