#include<bits/stdc++.h>
#define ll long long int
// #define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool palin( int *a, int n){
    int l = 0; int r = n - 1; 
    while(l <= r){
        if(a[l] == a[r]){
            l++; r--;
        }
        else return false;
    }
    return true;
}
int main()
{
    int n; cin >> n; 
    int a[n];
    for(auto &i: a){
        cin >> i;
    }
    if(palin(a , n) == true){
        cout << "YES\n";
    }
    else cout << "NO\n";


    return 0;
}