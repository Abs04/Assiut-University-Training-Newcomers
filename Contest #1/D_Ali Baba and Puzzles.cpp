#include"bits/stdc++.h"
typedef long long ll;
using namespace std; 

void solve() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if(a+b-c == d) {
        cout << "YES\n";
    }
    else if(a-b+c == d) {
        cout << "YES\n";
    }
    else if(a*b+c == d) {
        cout << "YES\n";
    }
    else if(a+b*c == d) {
        cout << "YES\n";
    }
    else if(a - b*c == d) {
        cout << "YES\n";
    }
    else if(a*b-c == d) {
        cout << "YES\n";
    }
    else cout << "NO\n";


}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  // cin >> t;
  for(int i = 1; i <= t; i++) {
    solve();
  }
  return 0;
}