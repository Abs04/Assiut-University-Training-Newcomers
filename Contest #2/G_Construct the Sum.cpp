#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long s, n; 
        scanf("%lld %lld", &n , &s);
        long long check = (n * (n + 1)) / 2; 
        if(check < s) {
            printf("-1\n");
        }
        else {
            bool ans = false; 
            int a[n], pos = 0; 
            for(int i = n; i >= 1; i--) {
                if(s - i > 0){
                    s -= i;
                    a[pos] = i; 
                    pos++; 
                }
                if(s >= 1 && s < i) {
                    a[pos] = s; 
                    pos++; 
                    ans = true; 
                    break;
                }            }
            if(ans == false) {
                printf("-1\n");
            }
            else {
                for(int i = 0; i < pos; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }

    }
    return 0; 
}