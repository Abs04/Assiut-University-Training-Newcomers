#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int dx[]={0,1,0,-1,1,1,-1,-1};
int dy[]={1,0,-1,0,1,-1,1,-1};
int main() {
    int n, m; 
    scanf("%d %d", &n, &m);
    char a[n][m];
    getchar();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%c", &a[i][j]);
        }
        getchar(); // catching end of line
    }
    int x, y; 
    scanf("%d %d", &x, &y);
    x--, y--; // 0 based index;
    bool ans = true; 
    for(int i = 0; i < 8; i++) {

        if(x+dx[i]<n && y+dy[i]<m && a[x+dx[i]][y+dy[i]] == '.') {
            ans = false; 
            break; 
        }
    }
    if(ans) {
        printf("yes");
    }
    else printf("no");
    return 0; 
}