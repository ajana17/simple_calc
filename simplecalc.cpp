#include <iostream>
using namespace std;

void calc(float op1, char op, float op2) {
    float result;

    while (true) {
        if (op == '+') {
            result = op1 + op2;
        } 
        
        else if (op == '-') {
            result = op1 - op2;
        } 
        
        else if (op == '*') {
            result = op1 * op2;
        } 
        
        else if (op == '/') {
            if (op2 == 0) {
                cout<<"Error! Can't divide by 0"<<endl;
                return;
            }
            result = op1 / op2;
        } 
        
        else {
            cout<<"Invalid operator"<<endl;
            return;
        }

        cout<<result;
        op1 = result;
        cin >> op;

        if (op == 'c') {
            cout<<"starting new operation"<<endl;
            cin>>op1;
            cin>>op;
            cin>>op2;
        } 
        
        else if (op == 'e') {
            cout << "\nExiting...\n";
            break;
        } 
        
        else {
            cin >> op2;
        }
    }
}

int main() {
    float op1, op2;
    char op;

    cout << "This is a simple calculator\n";
    cout << "Use operators +, -, *, /\n";
    cout << "Enter 'c' to start new operation; 'e' to end operations\n";
    cout << "Enter first operation:\n";

    cin>>op1;
    cin>>op;
    cin>>op2;
    calc(op1, op, op2);

    return 0;
}
