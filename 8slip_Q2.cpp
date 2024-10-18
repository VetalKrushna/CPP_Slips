/*Q.2) Write a C++ program to accept two integers and an arithmetic operator (+, -, *, /) from
user and performs the corresponding arithmetic operation and display the result. (Use
switch statement). */

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char ch;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"+ :: Addition\n- :: Substraction\n* :: Multiplication\n/ :: Division\nEnter operator:";
    cin>>ch;
    switch(ch)
    {
        case '+':cout<<"\nAddition::"<<a+b; break;
        case '-':cout<<"\nSubtraction::"<<a-b; break;
        case '*':cout<<"\nMultiplication::"<<a*b; break;
        case '/':cout<<"\nDivision::"<<a/b; break;
        default :cout<<"Invalid operator";
    }
}