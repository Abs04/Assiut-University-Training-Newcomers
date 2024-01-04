#include<bits/stdc++.h>
using namespace std;
int main() {
    int num1, num2;
    char sign; 
    cin >> num1 >> sign >> num2; 
    switch(sign) {
        case '>':
            if(num1 > num2) {
                cout << "Right\n";
            }
            else cout << "Wrong\n";
            break;
        case '<':
            if(num1 < num2) {
                cout << "Right\n";
            }
            else cout << "Wrong\n";
            break; 
        case '=':
            if(num1 == num2) {
                cout << "Right\n";
            }
            else cout << "Wrong\n";
        break;
    }
    return 0; 
} 