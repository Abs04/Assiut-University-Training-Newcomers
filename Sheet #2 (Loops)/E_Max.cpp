#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t = 1; cin >> t; 
    int n = 0, x;
    while(t--)
    {
        cin >> x;
        n = max(x , n);
    }
    cout << n << "\n";
    return 0;
}