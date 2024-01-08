#include<iostream>
#include<cmath>
using namespace std; 
int main() {
    int n; cin >> n; 
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0; 
    int pos1 = 0, neg1 = 0, neg2 = 0, pos2 = 0; 
    for(int i = 0; i < n; i++) {
        if(i & 1) {
            if(a[i] < 0) {
                neg1++; 
            }
            else pos1++; 
        }
        else {
            if(a[i] < 0) {
                neg2++; 
            }
            else pos2++; 
        }
    }
    if(neg1 >= neg2) {
        cnt += pos1; 
        cnt += neg2; 
    }
    else {
        cnt += pos2; 
        cnt += neg1;   
    }
    cout << cnt << '\n';
    return 0; 
}