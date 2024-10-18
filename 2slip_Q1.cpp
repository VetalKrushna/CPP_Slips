/*Q.1) Create a base class Shape. Derive three different classes Circle, Rectangle and Triangle
from Shape class. Write a C++ program to calculate area of Circle, Rectangle and Triangle.
(Use pure virtual function). */

#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void accept()=0;
    virtual void area()=0;
};

class Circle:public Shape
{
    public:
    float r;
   void accept()
   {
    cout<<"\n\nEnter radius:";
    cin>>r;
   }
   void area()
   {
    cout<<"Area of Circle:"<<3.14*r*r;
   }
};
class Triangle:public Shape
{
    public:
    int b,h;
   void accept()
   {
    cout<<"\n\nEnter Base and height:";
    cin>>b>>h;
   }
   void area()
   {
    cout<<"Area of Triangle:"<<0.5*b*h;
   }
};
class Rectangle:public Shape
{
    public:
    int l,w;
   void accept()
   {
    cout<<"\n\nEnter Width and Length:";
    cin>>w>>l;
   }
   void area()
   {
    cout<<"Area of Rectangle:"<<l*w;
   }
};

int main()
{
    Circle c;
    Triangle t;
    Rectangle r;

    c.accept(); c.area();
    t.accept();t.area();
    r.accept();r.area();

}