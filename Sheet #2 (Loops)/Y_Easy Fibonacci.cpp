#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n; 
    scanf("%d", &n);
    int fi = 0, se = 1; 
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d ", fi);
            continue; 
        }
        else if(i == 2) {
            printf("%d ", se);
            continue;
        }
        int temp = se; 
        se += fi; 
        fi = temp;
        printf("%d ", se); 
    }   
    return 0; 
} 