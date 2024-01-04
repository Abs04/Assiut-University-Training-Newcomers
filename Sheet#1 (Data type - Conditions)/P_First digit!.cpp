#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    string s; cin >> s;
    int n; 
    n = s.front() - '0';
    (n%2 == 0)? printf("EVEN\n"): printf("ODD");
    return 0;
}