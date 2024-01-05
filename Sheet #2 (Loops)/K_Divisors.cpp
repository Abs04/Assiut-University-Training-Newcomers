#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n; cin >> n; 
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            cout << i << '\n';
        }
    }

    return 0;
}