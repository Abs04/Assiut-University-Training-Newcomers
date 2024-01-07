#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main() {
    int n, m; 
    scanf("%d %d", &n, &m);
    int freq[m+1] = { 0};
    for(int i = 0; i <n ; i++) {
        int x; scanf("%d", &x); 
        freq[x]++; 
    }
    for(int i = 1; i <= m; i++) {
        printf("%d\n", freq[i]);
    }

    return 0; 
}