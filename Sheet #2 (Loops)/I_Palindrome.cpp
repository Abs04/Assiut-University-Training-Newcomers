#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n; cin >> n;
    string s, r; 
    s = to_string(n);
    r = s;
    reverse(r.begin() , r.end());

    for(int i = 0;i < r.length(); i++)
    {
        if(r[i] == '0')
        {
            r[i] = -1;
        }
        else break;
    }
    for(int i = 0; i < r.length(); i++)
    {
        if(r[i] != -1)
        {
            cout << r[i];
        }
    }
    cout  << endl;
    if(s == r)
    {
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
    
   return 0;
}