#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main() {
    int n, m; 
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int pos = 0; 
    for(int i = 0; i < n; i++) {
        if(b[pos] == a[i] && pos < m) {
            pos++; 
        }
    }
    if(pos == m) {
        printf("YES");
    }
    else printf("NO");
    return 0; 
}