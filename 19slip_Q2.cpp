/*Q.2) Write a C++ program to accept and display Bank Account details as Acc_No,
Acc_holder_name, Addr, Contact_Number and Balance. Perform deposit of some amount
and display modified bank account details. (Use manipulators). 
*/

#include<iostream>
using namespace std;

int main()
{
    int acno,cntno;
    string ac_h_name,addr;
    double bal,amt;

    cout<<":::Enter Account detail:::"<<endl;
    cout<<"Account no:";
    cin>>acno;
    cout<<"Account holder name:";
    cin>>ac_h_name;
    cout<<"Contact number:";
    cin>>cntno;
    cout<<"Address:";
    cin>>addr;
    cout<<"Balance:";
    cin>>bal;

    cout<<"\n\nEnter some Amount to deposit:";
    cin>>amt;
    
    cout<<":::Account details:::"<<endl;
    cout<<"Account no:"<<acno<<endl;
    cout<<"Account holder name:"<<acno<<endl;
    cout<<"Contact number:"<<cntno<<endl;
    cout<<"Address:"<<addr<<endl;
    cout<<"Balance:"<<bal<<endl;
    cout<<"Total Balance:"<<bal+amt<<endl;
}