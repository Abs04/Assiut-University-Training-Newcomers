#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int x, y;
    while(b > 0){

        x = a/b;
        y = a%b;
        a = b; 
        b = y; 
    }
    cout << a << '\n';

    return 0;
}