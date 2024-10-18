/*Q.1) Write a C++ program to create a class ‘MyArray’ which contains single dimensional
integer array of given size. Write a member function to display even and odd numbers
from a given array. (Use Dynamic Constructor to allocate and Destructor to free memory
of an object). */

using namespace std;
#include<iostream>

class MyArray
{
    public:
    int *a,even[100],odd[100],j=0,k=0;
    MyArray(int n)
    {
        a=new int[n];
        cout<<"Enter n element:";
        for(int i=0;i<n;i++)
          cin>>a[i];
    }

    void display(int n)
    {
      for(int i=0;i<n;i++)
      {
        if(a[i]%2==0)
          even[j++]=a[i];

        else
          odd[k++]=a[i];   
      }
    
     cout<<"\nEven Numbers:";
     for(int i=0;i<j;i++)
      cout<<even[i]<<" ";

       cout<<"\nOdd Numbers:";
     for(int i=0;i<k;i++)
      cout<<odd[i]<<" ";
    }  
    ~MyArray()
    {
        delete a;
    }
};

int main()
{
    int n;
    cout<<"Enter limit:";
    cin>>n;
    MyArray ob(n);
    ob.display(n);
}