/*Q.2) Write a C++ program to accept ‘n’ float numbers, store them in an array and print the
alternate elements of an array. (Use dynamic memory allocation). */

using namespace std;
#include<iostream>

int main()
{
    int n;
    cout<<"Enter limit:";
    cin>>n;
    float *a=new float[n];

    cout<<"Enter element:";
    for(int i=0;i<n;i++)
      cin>>a[i];
      
      cout<<"\nAlternate Elements:";
    for(int i=0;i<n;i=i+2)
      cout<<a[i]<<" ";
}