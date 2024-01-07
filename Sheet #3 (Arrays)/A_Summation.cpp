#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n; cin >> n; 
    int x; 
    ll sum = 0; 
    for(int i = 0; i < n; i++){
        cin >> x; 
        sum += x; 
    }
    cout << abs(sum) << '\n';

    return 0;
}