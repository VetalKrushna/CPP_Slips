/*Q.2) Write a C++program to calculate following series:
(1*1) +(2*2) +(3*3) + … +(n*n). */

using namespace std;
#include<iostream>
int main()
{
    int i,n,s=0;
    cout<<"Enter limit:";
    cin>>n;

    for(i=1;i<=n;i++)
     s=s+(i*i);

     cout<<"\nSum of series::"<<s;
}
