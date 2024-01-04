#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; 
    int digit1 = n/10, digit2 = n%10; 
    if((digit1 and digit2) and digit1 % digit2 == 0 or digit2 % digit1 == 0) {
        cout << "YES" << '\n';
    }
    else cout << "NO" << '\n';
    return 0; 
} 