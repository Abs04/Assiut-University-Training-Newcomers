#include<iostream>
#include<cstdio>
using namespace std; 
int main() {
    int a, b; scanf("%d %d", &a, &b);
    if(a - b >= 0) {
        printf("%d", a-b);
    }
    else printf("0");

    return 0; 
}