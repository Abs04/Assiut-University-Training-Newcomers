#include <bits/stdc++.h>
#define ll long long int
#define op                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    op
    map<int, int> m;
    int n; cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]--;
    }
    bool ans = true;
    for(auto i : m){
        if(i.second != 0){
            ans = false;
            break;
        }
    }
   
    if (ans == true)
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}