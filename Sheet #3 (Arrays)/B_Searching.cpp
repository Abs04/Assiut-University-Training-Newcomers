#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p = -1, p1 = 0;
    long long a[100000], x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
       if(a[i] == x){ p = i; break;}
    }
    cout << p << "\n";
}