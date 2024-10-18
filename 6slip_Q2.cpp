/*Q.2) Write a C++ program to calculate maximum and minimum of two integer numbers of two
different classes (Use friend function). */

#include<iostream>
using namespace std;
class B;
class A
{
    public:
    int a;
    void accept()
    
    {
        cout<<"Enter value of a:";
        cin>>a;
    }
    friend void min_max(A,B);
};
class B
{
    public:
    int b;
    void accept()
    
    {
        cout<<"Enter value of b:";
        cin>>b;
    }
    friend void min_max(A,B);
};

void min_max(A ob1,B ob2)
{
    if(ob1.a>ob2.b)
    {
        cout<<"\nMaximun :"<<ob1.a<<"\nMinimum :"<<ob2.b;
    }
    else
        cout<<"\nMaximun :"<<ob2.b<<"\nMinimum :"<<ob1.a;
}

int main()
{
    A ob1; ob1.accept();
    B ob2; ob2.accept();
    min_max(ob1,ob2);
}