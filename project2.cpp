#include<iostream>
using namespace std;

int main()
{
    int op1,op2,result;
    char operation;
    cout<<"press '+' for addition:"<<endl;
    cout<<"press '-' for subtraction:"<<endl;
    cout<<"press '*' for multiplication:"<<endl;
    cout<<"press '/' for division:"<<endl;
    cout<<"press '%' for remainder:\n...";
    cin>>operation;
    cout<<" Enter the first operand:"<<endl;
    cin>>op1;
    cout<<" Enter the sencond operand:"<<endl;
    cin>>op2;
    
    
    
    
    
    
    switch (operation)
    {
    case '+':
        result = op1+op2;
        cout<<"The Sum of "<<op1<<" and "<<op2<<" is "<<result<<endl;
        break;
    case '-':
        result =op1-op2;
        cout<<"The difference of "<<op1<<" and "<<op2<<" is "<<result<<endl;
        break;
    case '*':
        result =op1*op2;
        cout<<"The Product of "<<op1<<" and "<<op2<<" is "<<result<<endl;
        break;
    case '/':
        result =op1/op2;
        cout<<"The dividion of "<<op1<<" and "<<op2<<" is "<<result<<endl;
        break;
    case '%':
        result =op1%op2;
        cout<<"The remainder of "<<op1<<" and "<<op2<<" is "<<result<<endl;
        break;
    
    default:
        cout<<"ERROR"<<endl;
        break;
    }


}