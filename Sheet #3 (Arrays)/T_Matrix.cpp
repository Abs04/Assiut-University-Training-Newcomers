#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n; cin >> n; 
    int a[n][n];
    int d1 = 0, d2 = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        d1 += a[i][i];
    }
    for(int i = 0; i < n; i++){
        d2 += a[i][n - i - 1];
    }
    ans = abs(d1- d2);
    cout << ans << '\n';


    return 0;
}