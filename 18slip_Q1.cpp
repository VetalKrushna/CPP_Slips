/*Q.1) Design a base class product (Product_Id,Product_Name,pricece).Derive a class Discount
(Discount_In_Percentage) from Product. A customer buys ‘n’ product. Write a C++ program to
calculate total pricece, total discount. */

#include<iostream>
using namespace std;

class Product
{
    public:
    int pid;
    double price;
    string pname;

    void accept()
    {
        cout<<"Enter Product Id Name And pricece:";
        cin>>pid>>pname>>price;
    }
};

class Discount:public Product
{
    public:
    int discount,totaldiscount,total=0;
    void accept_D()
    {
        Product::accept();
      cout<<"\n Enter product discount : ";
       cin>>discount;
    }

    int calculate_discount()
    {
        totaldiscount=price*discount/100;
        cout<<"\nDiscount Amount:"<<totaldiscount<<endl;
        return totaldiscount;
    }

    int calculate_price()
    {
        total=total+price;
        cout<<"\nPrice:"<<price;
        return total;
    }
};

int main()
{
    Discount d[10];
    int i,n,total=0,discount=0,total_amt=0;
    cout<<"\nHow many products do you want to puraches : ";
    cin>>n;

     for(i=0;i<n;i++)
     {
    d[i].accept_D();
     }

      for(i=0;i<n;i++)
                {
                 total=total+d[i].calculate_price();
                 discount=discount+d[i].calculate_discount();
                }
    cout<<"\nTotal price:"<<total<<endl;
     cout<<"Total Amount::"<<discount;
}
