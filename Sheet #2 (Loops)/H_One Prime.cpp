#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool prime(ll n){

    if(n < 2) return false;
    if(n <= 3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;
    for(int i = 5; i*i <= n; i+=6){
        if(n%i == 0) return false;
        if(n%(i+2) == 0) return false;
    }
    return true;
}
int main()
{
op
    ll n; cin >>n ;
    if(prime(n)){
        cout << "YES\n";
    }
    else cout << "NO\n";    
    return 0;
}