/*Q.2) Write a C++ program to modify contents of an integer array. (Use Call by reference).*/

using namespace std;
#include<iostream>
void square(int a[])
{
  int i;
  for(i=0;i<5;i++)
    a[i]=a[i]*a[i]; 
}
int main()
{
	int a[5],i;
	cout<<"Enter 5 numbers:";
	for(i=0;i<5;i++)
	  cin>>a[i];
	
	square(a);
	cout<<"Display numbers:";
	for(i=0;i<5;i++)
	  cout<<a[i]<<" ";

}     