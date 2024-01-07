#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
op
    int n , m; 
    cin >> n >> m; 
    int a[n][m] , x;
    for(int i =0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    bool ans = false; 
    cin >> x; 
    for(int i =0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == x){
                ans = true;
                break;
            }
        }
    }
    if(ans  == true){
        cout << "will not take number\n";
    }
    else cout << "will take number\n";


    return 0;
}