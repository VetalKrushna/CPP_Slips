/*Q.1) Write a C++ program to create two classes  and Array2 with an integer array as a
data member. Write necessary member functions to accept and display array elements of
both the classes. Find and display maximum of both the array. (Use Friend function). */

using namespace std;
#include<iostream>
int a,b;
class Array2;
class Array1
{
    public:
    int a[10];
    void accept(int n)
    {
        cout<<"Enter Ist array elements:";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    friend void max(Array1,Array2);
};

class Array2
{
    public:
    int b[10];
    void accept(int n)
    {
        cout<<"Enter IIst array elements:";
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
    }  friend void max(Array1,Array2);
};

void max(Array1 ob1,Array2 ob2)
{
    int m1=ob1.a[0];
    int m2=ob2.b[0],i;

    for(i=0;i<a;i++)
    {
        if(m1<ob1.a[i])
        m1=ob1.a[i];
    }
    cout<<"\nMaximum from Ist array:"<<m1;
    for(i=0;i<b;i++)
    {
        if(m2<ob2.b[i])
        m2=ob2.b[i];
    }
    cout<<"\nMaximum from IIst array:"<<m2;

    cout<<"\n\nMaximum from Both Array:";
    if(m1>m2)
     cout<<m1;
    else 
     cout<<m2; 
}

int main()
{
 
    cout<<"Enter Ist Array limit:";
    cin>>a;
    cout<<"Enter IIst Array limit:";
    cin>>b;

    Array1 ob1;   ob1.accept(a);
    Array2 ob2;   ob2.accept(b);

    max(ob1,ob2);
}