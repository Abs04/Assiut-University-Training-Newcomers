#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool lucky(int n)
{
    while(n > 0)
    {
        int temp = n%10;
        if(!(temp == 4 || temp == 7))
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    int a, b, unlucky = 1; cin >> a >> b;
    if(a > b){swap(a, b);}

    for(int i = a; i <= b; i++)
    {
        if(lucky(i) == true)
        {
            cout << i << " ";
            unlucky = 0;
        }
    }
    if(unlucky)
    {
        cout << -1 << '\n';
    }
    return 0;
}