#include<bits/stdc++.h>
using namespace std;
int main() {
    float x, p; cin >> x >> p;
    float ans = p / (100 - x); 
    ans *= x;
    ans += p;
    cout << fixed << setprecision(2)<< ans << '\n';
    
    return 0;
} 