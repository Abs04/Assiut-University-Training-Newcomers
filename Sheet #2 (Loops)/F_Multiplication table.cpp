#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n; cin >> n;
    for(int i = 1; i<= 12; i++)
    {
        printf("%d * %d = %d\n", n , i , n*i);
    }
   return 0;
}