#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t = 1; cin >> t; 
    while(t--)
    {
        string s; cin >> s;
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.length(); i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;

    }
   return 0;
}