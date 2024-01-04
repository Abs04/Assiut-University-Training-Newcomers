#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    printf("floor %.0f / %.0f = %.0f\n", a, b, floor(a / b));
    printf("ceil %.0f / %.0f = %.0f\n", a, b, ceil(a / b));
    printf("round %.0f / %.0f = %.0f\n", a, b, round(a / b));
    return 0;
}