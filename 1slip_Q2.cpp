/*Q.2) Write a C++ program to create a class MyDate with three data members as dd, mm, yyyy.
Create and initialize the object by using parameterized constructor and display date in dd-mon-yyyy format. 
   (Input: 19-12-2014 Output: 19-Dec-2014). (Use the concept of dynamic initialization of object). [10]
 */
#include<string.h>
#include<iostream>
using namespace std;
class Mydate
{
    public:
    int d,m,y;
    Mydate(int d,int m,int y)
    {
        this->d=d;
        this->m=m;
        this->y=y;
    }
    void display()
    {
        char mon[20];
        switch(m)
        {
            case 1:strcpy(mon,"Jan");break;
            case 2:strcpy(mon,"Feb");break;
            case 3:strcpy(mon,"Mar");break;
            case 4:strcpy(mon,"Apr");break;
            case 5:strcpy(mon,"May");break;
            case 6:strcpy(mon,"June");break;
            case 7:strcpy(mon,"July");break;
            case 8:strcpy(mon,"Aug");break;
            case 9:strcpy(mon,"Sept");break;
            case 10:strcpy(mon,"Oct");break;
            case 11:strcpy(mon,"Nov");break;
            case 12:strcpy(mon,"Dec");break;
            default :cout<<"\nInvalid month"; break;
        }
            cout<<"\nDate::"<<d<<"-"<<mon<<"-"<<y;
    }
};
int main()
{
    int m,d,y;
    cout<<"Enter date in dd mm yyyy:";
    cin>>d>>m>>y;
    Mydate ob(d,m,y);
    ob.display();
}