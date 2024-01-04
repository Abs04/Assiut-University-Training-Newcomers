#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    char a; cin >> a; 
    int n = a;
    if(n >= 48 && n <= 57)
    {
        printf("IS DIGIT");
    }
    else if (n >= 65 && n <= 90)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (n >= 97 && n <= 122)
    {
        printf("ALPHA\nIS SMALL");
    }
    return 0;
}