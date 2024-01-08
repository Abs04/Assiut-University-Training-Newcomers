#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] & 1)
            {
                odd++;
            }
            else
                even++;
        }
        if (n & 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << (n / 2) - min(even, odd) << '\n';
        }
    }
    return 0;
}