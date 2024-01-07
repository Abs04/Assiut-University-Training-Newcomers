#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n , q; 
    cin >> n >> q; 
    vector<int> a(n);
    for(auto &i : a){
        cin >> i; 
    }
    sort(a.begin(), a.end());
    int x; 
    while(q--){
        cin >> x; 
        if(binary_search(a.begin() , a.end(), x)){
            cout << "found" << '\n';
        }
        else cout << "not found" << '\n';
    }
    
    return 0;
}