#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n , m; 
    ll sum = 0; 
    while(cin >> n >> m){
        if(n <= 0 || m<=0){
            break;
        }
        sum = 0;
        if(m<n){
            swap(m, n);
        }
        for(n; n<= m; n++){
            cout << n << ' ';
            sum+=n;
        }
        cout << "sum =" << sum<<'\n';


    }
    return 0;
}