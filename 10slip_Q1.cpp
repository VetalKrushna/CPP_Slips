/*1) Write a C++ program to create a class Distance with data members feet and inches. Write
member functions for the following:
a. To accept distance
b. To display distance
c. To add two distance objects
(Use object as a function argument and function returning object). */

#include<iostream>
using namespace std;
class product
{
    public:
    int pno,price;
    string pname;
     void accept()
     {
        cout<<"Enter Product no Name and Price:";
        cin>>pno>>pname>>price;
     }
     void disp()
     {
        cout<<"\nProduct Number:"<<pno;
        cout<<"\nProduct Name:"<<pname;
        cout<<"\nProduct Price:"<<price;
     }
};
main()
{
    int n,i,index=0;
    cout<<"Enter limit:";
    cin>>n;
    product *p=new product[n];

    for(i=0;i<n;i++)
    p[i].accept();

cout<<"\n\nMaxinum Price Product::";
    int max=p[0].price;
    for(i=0;i<n;i++)
    {
        if(max<p[i].price)
         {
           max=p[i].price;
           index=i;
         }
    }
    p[index].disp();
}