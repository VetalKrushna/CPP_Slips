/*Q.2) Write a C++ program to calculate the average height of all the students of a class. The
number of students and their heights are entered by user. (Use array of objects). */

#include<iostream>
using namespace std;
class Student
{
    public:
    int h;
     int accept()
     {
        cout<<"Enter height:";
        cin>>h;
        return h;
     }
};

int main()
{
    int n,avg=0;
    cout<<"Enter limit:";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
      avg=avg+s[i].accept();

     cout<<"\nAverage heightof student ::" <<avg/n;
}

