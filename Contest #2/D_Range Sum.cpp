#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long l, r; scanf("%lld %lld", &l, &r);
        if(l > r) swap(l ,r);
        long long ans = (r * (r + 1)) / 2; 
        ans -= ((l - 1) * (l)) / 2; 
        printf("%lld\n", ans);
    }
    return 0; 
}