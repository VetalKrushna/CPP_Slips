/*Q.2) Write a C++ program to calculate multiplication of two integer numbers of two different
classes. (Use friend class). */

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
        friend class B;
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
    void multi(A &ob1)
    {
        
        int m=ob1.a*b;
        cout<<"\nMultiplication:"<<m;
    }
};
int main()
{
    A ob1;
    B ob2;
    ob1.accept();
    ob2.accept();
    ob2.multi(ob1);
}