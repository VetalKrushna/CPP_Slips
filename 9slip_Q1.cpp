/*Q.1) Design a base class Employee (emp-code, name). Derive two classes as Fulltime (daily
rate, number of days, salary) and Part time (number of working hours, hourly rate, salary)
from Employee. Write a C++ menu driven program to:
i. Accept the details of ‘n’ employees and calculate the salary.
ii. Display the details of ‘n’ employees.
iii. Search a given Employee. */

#include<iostream>
using namespace std;

class Employee
{
    public:
    int ecode;
    string name;
    void accept_emp()
    {
        cout<<"Enter Employee code and Name:";
        cin>>ecode>>name;
    }

    void display()
    {
        cout<<"\nEmployee Name:"<<name;
        cout<<"\nEmployee code:"<<ecode<<endl;
    }
};

class Fulltime:public Employee
{
    public:
     double d_rate,sal;
     int n_day;

     void accept_full()
     {
        Employee::accept_emp();
        cout<<"Enter Number of days:"; cin>>n_day;
        cout<<"Enter Daily rate:";  cin>>d_rate;
       
     }

     void display()
     {
        Employee::display();
        cout<<"\nNumber of days:"<<n_day;
        cout<<"\nDaily rate:"<<d_rate;
        cout<<"\nFulltime Salary:"<<n_day*d_rate<<endl;
     }
};

class Partime:public Employee
{
    public:
     int n_hour;
     double h_rate,sal;

     void accept_part()
     {
        Employee::accept_emp();
        cout<<"Enter number of hours:";
        cin>>n_hour;
        cout<<"Enter Hourly rate:";
        cin>>h_rate;
     }

     void display()
     {
        Employee::display();
         cout<<"\nNumber of hours:"<<n_hour;
        cout<<"\nHourly rate:"<<h_rate;
        cout<<"\nPartime Salary:"<<n_hour*h_rate<<endl;
     }
};

int main()
{
    int n,i,a,ch,ecd;
    cout<<"Enter limit:"; cin>>n;

    Partime p[n];
    Fulltime f[n];

    cout<<"\nPress 0 for Fulltime and 1 for Partime Employee:";
    cin>>a;
    
    do{
        cout<<"\n\n1-Accept Employee\n2-Display\n3-Search\n4-Exit\nEnter choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:if(a==0)
                   {
                    for(i=0;i<n;i++)
                    {
                     f[i].accept_full();
                    }
                   }

                   if(a==1)
                   {
                    for(i=0;i<n;i++)
                    {
                     p[i].accept_part();
                    }
                   }
                   break;

            case 2:if(a==0)
                   {
                    for(i=0;i<n;i++)
                    {
                     f[i].display();
                    }
                   }
                    if(a==1)
                   {
                    for(i=0;i<n;i++)
                    {
                     p[i].display();
                    }
                   }
                   break;

            case 3:cout<<"\nEnter Employee code to search:"       ;
                    cin>>ecd;

                    for(i=0;i<n;i++)
                    {
                        if(f[i].ecode==ecd)
                        {
                            cout<<"\nFulltime Employee found"<<endl;
                            f[i].display();
                            break;
                        }
                         if(p[i].ecode==ecd)
                        {
                            cout<<"\nParttime Employee found"<<endl;
                            p[i].display();
                            break;
                        }
                    }
                    break;          
        }
    }while(ch!=4);
}