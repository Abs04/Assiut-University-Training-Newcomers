#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    char a;
    int b;
    cin >> a;
    b = a;
    if (a >= 'a' && a <= 'z')
    {
        b -= 32;
        cout << (char)b << '\n';
    }
    else
    {
        b += 32;
        cout <<  (char)b << '\n';
    }

    return 0;
}