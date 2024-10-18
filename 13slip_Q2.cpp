/*Q.2) Write a C++ program to print the following pattern.
A
B C
D E F
G H I J */

using namespace std;
#include<iostream>
int main()
{
 int i,j;
 char ch='A';
 for(i=1;i<=4;i++)
 {
 	for(j=1;j<=i;j++)
	  cout<<ch++;
	cout<<endl;  
 }
}