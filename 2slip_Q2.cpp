/*Q.2) Write a C++ program to define power function to calculate x^y. (Use default value
 as 2 for y). */

#include<math.h>
 using namespace std;
 #include<iostream>
 void power(int x,int y=2)
{
    cout<<"\nPower = "<<pow(x,y); 
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    power(n);
}