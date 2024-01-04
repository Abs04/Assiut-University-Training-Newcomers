#include<iostream>
using namespace std;
int main() {
    char C; cin >> C; 
    if(C == 'z') {
        C = 'a';
    }
    else C++;
    cout << C;
    return 0; 
} 