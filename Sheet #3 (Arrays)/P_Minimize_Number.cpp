#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n; cin >> n; 
    int a[n];
    for(auto &i : a){
        cin >> i; 
    }
    int ans = 0; 
    bool check = false;
    while(1){
        for(int i = 0; i < n; i++){
            if(a[i]%2 & 1){
                check = true; 
                break;
            }
            else a[i]/=2;
        }
        if(check){
            break;
        }
        else ans++;
    }
    cout << ans << '\n';

    return 0;
}