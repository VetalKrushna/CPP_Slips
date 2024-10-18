/*Q.1) Write a C++ program to calculate area and circumference of a Circle. (Use default
argument, scope resolution operator and manipulator.) */

#include<iostream>
using namespace std;
double pi=3.14;
 void area(double r=65.2)
 {
    cout<<"Area of circle:"<<::pi*r*r<<endl;
 }
 void circum(double r)
 {
    cout<<"Circumference:"<<2*::pi*r<<endl;
 }
 int main()
 {
    area();
    circum(65.2);
 }