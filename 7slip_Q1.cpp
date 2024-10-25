/*Q.1) Write a C++ program to create a class ‘MyNumber’ with three data members of type
integer. Create and initialize the object using default constructor, parameterized
constructor and parameterized constructor with default value. Write a member function to
display average of given three numbers for all objects. */

#include<iostream>
using namespace std;

class MyNumber
{
    int a,b,c;
    public:
    MyNumber()
    {
        a=10;
        b=20;
        c=60;
    }
    MyNumber(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }

    MyNumber(int a,int b=20,long int c=40)
    {
        this->a=a;
        this->b=b;
        this->c=c;    
    }

    void avg()
    {
        float average=(a+b+c)/3;
        cout<<"\nAverage ::"<<average;
    }
};

int main()
{
    MyNumber ob1;
    ob1.avg();
    MyNumber ob2(11,22,33);
    ob2.avg();

    MyNumber ob3(50,60);
    ob3.avg();
}