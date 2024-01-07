#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        int a[n];
        for(auto&i : a){
            cin >> i;
        }
        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n;j++){
                ans = INT_MIN;
                for(int k = i ; k < j; k++){
                    ans = max(ans , a[k]);
                }
                ans = max(ans , a[j]);
                cout << ans << ' ';
            }  
        }
        cout << '\n';
    }


    return 0;
}