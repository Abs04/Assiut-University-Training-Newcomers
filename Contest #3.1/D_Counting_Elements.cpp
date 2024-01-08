#include<iostream>
#include<cmath>
using namespace std; 
int main() {
    int n; cin >> n; 
    int a[1005] = {0}; 
    for(int i = 0; i < n; i++) {
        int x; cin >> x; 
        a[x]++; 
    }
    int cnt = 0; 
    for(int i = 0; i < 1005; i++) {
        if(a[i+1] != 0) {
            cnt += a[i];
        }
    }
    cout << cnt << '\n';

    return 0; 
}