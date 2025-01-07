#include <iostream>

using namespace std;

void calc(float op1, char op, float op2) {
    float result;

    while (op != '=')
    {
        if (op == '+')
        {
            result = op1+op2;
            cout<<result<<" ";
            op1=result;
            cin>>op;

            if (op == 'c')
            {
                cin>>op1;
                cin>>op;
                cin>>op2;   

                calc(op1, op, op2);
            }

            else if (op == 'e'){
                break;
            }
            
            else
            {cin>>op2;}
        }

        else if (op == '-')
        {
            result = op1-op2;
            cout<<result<<" ";
            op1=result;
            cin>>op;
            
            if (op == 'c')
            {
                cin>>op1;
                cin>>op;
                cin>>op2;   

                calc(op1, op, op2);
            }

            else if (op == 'e'){
                break;
            }
            
            else
            {cin>>op2;}
        }

        else if (op == '*')
        {
            result = op1*op2;
            cout<<result<<" ";
            op1=result;
            cin>>op;

            if (op == 'c')
            {
                cin>>op1;
                cin>>op;
                cin>>op2;   

                calc(op1, op, op2);
            }

            else if (op == 'e'){
                break;
            }
            
            else
            {cin>>op2;}
        }

        else if (op == '/')
        {
            result = op1/op2;
            cout<<result<<" ";
            op1=result;
            cin>>op;
            
            if (op == 'c')
            {
                cin>>op1;
                cin>>op;
                cin>>op2;   

                calc(op1, op, op2);
            }

            else if (op == 'e'){
                break;
            }
            
            else
            {cin>>op2;}
        }
    }
}

int main () {

    float op1, op2;
    float result;

    char op;

    cout<<"This is a simple calculator"<<endl;
    cout<<"use operators +, -, *, /"<<endl;
    cout<<"enter 'e' to end operations"<<endl;

    cin>>op1;
    cin>>op;
    cin>>op2;

    calc(op1,op, op2);
    
    return 0;
}