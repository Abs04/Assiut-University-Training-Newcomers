#include<bits/stdc++.h>
using namespace std;
int main() {
    int num1, num2, num3;
    char op, sign; 
    cin >> num1 >> op >> num2 >> sign >> num3; 
    switch(op) {
        case '+':
            if(num1 + num2 == num3) {
                cout << "Yes\n";
            }
            else cout << num1 + num2;
            break;
        case '-':
            if(num1 - num2 == num3) {
                cout << "Yes\n";
            }
            else cout << num1 - num2;
            break; 
        case '*':
            if(num1 * num2 == num3) {
                cout << "Yes\n";
            }
            else cout << num1 * num2;
        break;
    }
    return 0; 
} 