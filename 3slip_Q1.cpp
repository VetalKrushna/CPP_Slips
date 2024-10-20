/*Q.1) Create a C++ class Employee with data members E_no, E_Name, Designation and Salary.
Accept two employee’s information and display information of employee having maximum
salary. (Use this pointer). */

using namespace std;
#include<iostream>
#include<string.h>
class Employee
{
    public:
     int eno,sal;
     char desig[10],name[10];
      void accept(int eno,char name[10],char desig[10],int sal)
      {
        this->eno=eno;
        strcpy(this->desig,desig);
        strcpy(this->name,name);
        this->sal=sal;
      } 

      void display(Employee &ob)
      {
          cout<<"Emp no:"<<ob.eno<<endl;
          cout<<"Emp name:"<<ob.name<<endl;
          cout<<"Emp desination:"<<ob.desig<<endl;
          cout<<"Emp salary:"<<ob.sal<<endl;
      }
};

int main()
{
     int eno,sal;
     char desig[10],name[10];
   
    Employee e1,e2;

    cout<<"Enter Employee details:"<<endl;
    cout<<"Emp no:";  cin>>eno;
    cout<<"Emp name:";  cin>>name;
    cout<<"Emp desination:";  cin>>desig;
    cout<<"Emp salary:";  cin>>sal;
    
    e1.accept(eno,name,desig,sal);
    
    cout<<endl<<"Enter Employee details:"<<endl;
    cout<<"Emp no:";  cin>>eno;
    cout<<"Emp name:";  cin>>name;
    cout<<"Emp desination:";  cin>>desig;
    cout<<"Emp salary:";  cin>>sal;
    
    e2.accept(eno,name,desig,sal);
    cout<<endl<<endl<<"****Maximum salary Employee details***"<<endl;

    if(e1.sal>e2.sal)
      e2.display(e1);
    else
      e2.display(e2);  
}