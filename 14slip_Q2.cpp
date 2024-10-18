/*Q.2) Write a C++ program to print the following pattern.
       *
     * * 
   * * *
 * * * * 
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<i;j++)
         cout<<" ";

        for(j=4;j>=i;j--)
          cout<<"*";

        cout<<"\n"; 
    }
}