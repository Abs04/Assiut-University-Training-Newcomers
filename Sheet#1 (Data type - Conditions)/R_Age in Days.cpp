#include<bits/stdc++.h>
using namespace std; 
int main() {
    int total; cin >> total; 
    cout << total / 365 << " years\n";
    cout << (total % 365) / 30 << " months\n";
    cout << (total % 365) % 30 << " days\n";
    return 0; 
}