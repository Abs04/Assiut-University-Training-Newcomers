#include<iostream>
#include<cmath>
using namespace std; 
int main() {
    int n; cin >> n; 
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = n-1; 
    while(l <= r) {
        cout << a[l] << " ";
        if(l == r)break;
        cout << a[r] << " ";
        l++, r--;
    }
    return 0; 
}