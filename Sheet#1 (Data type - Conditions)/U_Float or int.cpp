#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    float n; cin >> n;
    int k = n;
    float m = n - k;
    if( m == 0)
    {
        cout << "int " << k << endl;
    }
    else printf("float %d %.3f\n", k , m);
    return 0;
}