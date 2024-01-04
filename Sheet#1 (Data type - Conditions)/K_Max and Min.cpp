#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a[3], maxi, mini;
    cin >> a[0] >> a[1] >> a[2];
    maxi = *max_element(a, a+3);
    mini = *min_element(a, a+3);
   cout << mini << " " << maxi << endl;
   return 0;
}