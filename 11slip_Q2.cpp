/*Q.2) Write a C++ program to accept length and width of a rectangle. Calculate and display
perimeter as well as area of a rectangle by using Inline function. */

#include<iostream>
using namespace std;

inline void area(int l,int w)
{
    cout<<"\nArea of rectangle:"<<l*w;
}

inline void peri(int l,int w)
{
    cout<<"\nPerimeter of rectangle:"<<2*(l+w);
}

int main()
{
    int l,w;
    cout<<"Enter length and Width:";
    cin>>l>>w;
    area(l,w);
    peri(l,w);
}