#include<bits/stdc++.h>
#define ll long long int
// #define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    int n; cin >> n; 
    vector<int>a(n);
    for(auto &i: a){
        cin >> i;
    }
    for(int i = n - 1; i >= 0; i--){
        cout << a[i] << ' ';
    }


    return 0;
}