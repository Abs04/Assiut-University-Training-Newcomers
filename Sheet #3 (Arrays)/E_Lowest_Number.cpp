#include<bits/stdc++.h>
#define ll long long int
// #define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    int n; cin >> n; 
    int a[n];
    cin >> a[0];
    int ans = 1; int temp = a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] < temp ){
            temp = a[i];
            ans = i+1;
        }
    }
    cout << temp << ' ' << ans << '\n';


    return 0;
}