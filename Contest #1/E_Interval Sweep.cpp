#include<iostream>
using namespace std;
int main() {
    int a, b; cin >> a >> b; 
    if(abs(a - b) <= 1 && (a != 0 or b != 0)) {
        cout << "YES";
    }
    else cout << "NO";
    return 0; 
} 