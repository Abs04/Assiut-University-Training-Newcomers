#include <bits/stdc++.h>
#define ll long long int
#define op                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    op int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &i : a)
        {
            cin >> i;
        }
        bool flag = true;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                flag = true;
                for (int k = i; k < j; k++)
                {
                    if (a[k] > a[k + 1])
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}