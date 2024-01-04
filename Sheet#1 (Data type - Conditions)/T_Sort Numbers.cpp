#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll l1, l2, l3, r1, r2, r3; 
    int a[3];
    for(auto &i : a){cin >> i;}
    l1 = a[0]; l2 = a[1], l3 = a[2];
    sort(a , a+3);
    for(auto i: a){cout << i << endl;}
    cout << endl;
    cout << l1 << endl;
    cout << l2 << endl;
    cout << l3 << endl; 
    return 0;
}