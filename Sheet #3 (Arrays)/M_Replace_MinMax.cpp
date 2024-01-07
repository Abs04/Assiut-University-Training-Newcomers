#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n; cin >> n; 
    vector<int>a(n);
    for(auto &i : a){
        cin >> i; 
    }
    // int mini, maxi;
   auto mini = min_element(a.begin(), a.end());
   auto maxi = max_element(a.begin(), a.end());
   swap(*mini, *maxi);
   for(auto i : a){
       cout << i << ' ';
   }

    return 0;
}