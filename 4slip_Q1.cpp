/*Q.1) Design a Base class Customer (name, phone-number). Derive a class Depositor (accno,
balance) from Customer. Again, derive a class Borrower (loan-no, loan-amt) from
Depositor. Write necessary member functions to read and display the details of ‘n’
customers. */
#include<iostream>
using namespace std;

class Customer
{
    public:
    int phno;
    string name;
    void accept_cust()
    {
        cout<<"Enter Customer name and phone no:";
        cin>>name>>phno;
    }
};
class Depositer:public Customer
{
    public:
     double acno,bal;
     void accept_depo()
     {
        cout<<"Enter Account no:";
        cin>>acno;
        cout<<"Enter Balance:";
        cin>>bal;
     }
};
class Borrower:public Depositer
{
    public:
     int l_no; double l_amt;
     void accept_borr()
     {
        cout<<"Enter loan no:";
        cin>>l_no;
        cout<<"Enter loan Amount:";
        cin>>l_amt;
     }

     void display()
     {
       
       cout<<"\nCustomer Name::"<<name;
       cout<<"\t\tPhone number::"<<phno;
       cout<<"\nAccount number::"<<acno;
        cout<<"\t\tBalance::"<<bal;
       cout<<"\nLoan number::"<<l_no;
       cout<<"\t\tLoan amount::"<<l_amt;
      
     }
};

int main()
{
    int n;
    cout<<"Enter limit:";
    cin>>n;
    Borrower b[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\n\n";
       b[i].accept_cust();
       b[i].accept_depo();
       b[i].accept_borr();
    }

     cout<<"\n\n*****Coustmer Detail*****";
    
  for(int i=0;i<n;i++)
  { 
     cout<<"\n\n";
       b[i].display();
  } 
}