#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main() {
    int n; scanf("%d", &n);
    int ans = 0, temp = 0; 
    for(int i = 0; i < n; i++) {
        long long x; 
        scanf("%lld", &x);
        temp = 0; 
        while(x % 2 == 0) {
            x /= 2; 
            temp++; 
        }
        if(temp > ans) {
            ans = temp; 
        }
    }
    printf("%d", ans);
    return 0; 
}