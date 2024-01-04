#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a, b ;
    cin >> a;
    char s; cin >> s;
    cin >> b;
    
    if(s == '+')
    {

        printf("%d", a+b);
    }
    else if(s == '-')
    {
        printf("%d", a-b);
    }
    else if(s == '*')
    {
        printf("%d", a*b);
    }
    else if(s == '/')
    {
        printf("%d", a/b);
    }
   return 0;
}