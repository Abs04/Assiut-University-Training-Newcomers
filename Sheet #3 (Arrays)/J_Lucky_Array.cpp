#include<bits/stdc++.h>
#define ll long long int
 #define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int n; cin >> n; 
    vector<int>a(n);
    int ans = 0; 
    for(auto &i : a){
        cin >> i;
    }
    sort(a.begin(), a.end());
    int temp = a[0];
    for(int i = 0; i <n; i++){
        {
            if(temp == a[i]){
                ans++;
            }
            else break;
        }
        ans%=2;
        
    }
    if(ans)
    {
            cout << "Lucky\n";
        }
        else cout << "Unlucky\n";
    return 0;
}