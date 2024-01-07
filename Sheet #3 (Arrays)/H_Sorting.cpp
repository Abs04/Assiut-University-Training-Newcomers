#include<bits/stdc++.h>
#define ll long long int
// #define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n];
    for(auto &i: a){
        cin >> i;
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j <n; j++){
            if(a[i] > a[j]){
                swap(a[i] , a[j]);
            }
        }
    }
    for(auto i : a){
        cout << i << ' ';
    }


    return 0;
}