#include<bits/stdc++.h>
#define ll long long int
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool check(string a){
    for(int i = 0; i < a.length(); i++){
        if(!isdigit(a[i])){
            return false;
        }
    }
    return true;  
}
int main()
{
op
    int a, b; cin >> a >> b;
    string s, aa, bb;cin >> s; 
    aa = s.substr(0, a);
    bb = s.substr(a+1, s.size());
    // cout << aa << ' ' << bb << ' ' <<< '\n';
    if(s[a] == '-'){
        if(check(aa) == true && check(bb) == true){
            cout << "Yes\n";
        }
        else cout << "No\n";
    }
    else cout << "No\n";



    return 0;
}