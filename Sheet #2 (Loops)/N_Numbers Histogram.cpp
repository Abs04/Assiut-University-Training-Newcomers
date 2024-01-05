#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n , x; 
    char s; 
    cin >> s; 
    cin >> n;
    while(n--)
    {
         cin >> x; 
         for(int i = 1; i <= x; i++)
         {
             cout << s;
         }
         cout << endl;
    }
   return 0;
}