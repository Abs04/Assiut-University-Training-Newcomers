#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n; 
    scanf("%d", &n);
    int space = n; 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= space - i) {
                printf(" ");
            }
            else printf("*");
        }
        for(int j = 1; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(j <= space - i) {
                printf(" ");
            }
            else printf("*");
        }
        for(int j = 1; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0; 
} 