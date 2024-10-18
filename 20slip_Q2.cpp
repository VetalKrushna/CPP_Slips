/*Q.2) Write a C++ program to calculate area of cone, sphere and circle by using function
overloading.*/


#include<iostream>
using namespace std;
void area(float r,float l)
{
    cout<<"\nArea of cone:"<<3.14f*r*(r+l);
}
void area(float r)
{
    cout<<"\nArea of sphere:"<<4*3.14f*r*r;
}
void area(double r)
{
    cout<<"\nArea of Circle:"<<3.14*r*r;
}

int main()
{
    area(23.6,65.3);
    area(65.3);
    area(54.3);
}