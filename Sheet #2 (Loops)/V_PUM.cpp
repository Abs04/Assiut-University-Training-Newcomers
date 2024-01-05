#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n; cin >> n; 
    int j = 0; 
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= 4; k++){
            j++;
            if(k!= 4){
             cout << j << ' ';
            }
            else cout << "PUM";
        }
        cout << "\n";
    }

    return 0;
}