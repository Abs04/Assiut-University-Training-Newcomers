#include<iostream>
using namespace std;
int main() {
    long long n, k, a;
    cin >> n >> k >> a; 
    n *= k; 
    if(n % a != 0) {
        cout << "double";
    }
    else if( n / a <= 2147483647) {
        cout << "int";
    }
    else cout << "long long";
    return 0; 
} 