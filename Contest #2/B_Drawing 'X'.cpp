#include<iostream>
#include<cstdio>
using namespace std; 
int main() {
    int n; cin >> n; 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == (n + 1) / 2 && j == (n + 1) / 2) {
                printf("X");
            }
            else if(i == j) {
                printf("\\");
            }
            else if(n - j + 1 == i) {
                printf("/");
            }
            else printf("*");
        }
        cout << '\n';
    }

    return 0; 
}