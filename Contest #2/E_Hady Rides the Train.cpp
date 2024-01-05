#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main() {
    long long id; scanf("%lld", &id);
    long long row, col; 
    row = id / 4; 
    if(row % 2 == 0) {
        col = id % 4; 
    }
    else col = 3 - (id % 4);
    printf("%lld %lld", row, col);
    return 0; 
}