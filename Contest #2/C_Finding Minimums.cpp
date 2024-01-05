#include<iostream>
#include<cstdio>
using namespace std; 
int main() {
    int n, k; scanf("%d %d", &n, &k);
    int cnt = 0; 
    long mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        long x; scanf("%d", &x);
        cnt++;
        if(x < mn) {
            mn = x; 
        } 
        if(cnt == k or i == n-1) {
            printf("%d ", mn);
            mn = INT_MAX;
            cnt = 0;
        } 
    }
    return 0; 
}