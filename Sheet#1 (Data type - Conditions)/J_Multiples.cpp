#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int a, b; cin >> a >> b; 
    (a%b == 0 || b%a == 0)? cout << "Multiples\n" : cout << "No Multiples\n";
    return 0;
}