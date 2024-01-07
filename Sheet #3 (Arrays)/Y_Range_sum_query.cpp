#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n, q;
    cin >> n >> q; 
    vector<ll>p_sum(n+1);
    for(int i = 1; i <= n; i++){
        cin >> p_sum[i];
    }
    p_sum[0] = 0;
    for(int i = 1; i <= n; i++){
        p_sum[i] = p_sum[i-1] +p_sum[i]; 
    }
    int l,r; 
    while(q--){
        cin >> l >> r; 
        cout << p_sum[r] - p_sum[l-1] << '\n';
    }

    return 0;
}