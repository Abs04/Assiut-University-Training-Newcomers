#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int t; 
    scanf("%d", &t);
    while(t--) {
        int x, y; scanf("%d %d", &x, &y);
        if(x > y) {
            swap(x, y);
        } 
        long sum = 0; 
        for(int i = x + 1; i < y; i++) {
            if(i & 1) {
                sum += i; 
            }
        }
        printf("%d\n", sum);
    }
    return 0; 
}