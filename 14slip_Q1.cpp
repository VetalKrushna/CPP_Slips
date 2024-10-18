/*Q.1) Design two base classes Personnel (name, address, email-id, birth date) and Academic
(marks in tenth, marks in twelfth class obtained). Derive a class Bio-data from both these
classes. Write a C++ program to prepare a bio-data of a student having Personnel and
Academic information*/

#include<iostream>
using namespace std;
class Personnel
{
    public:
    string name,addr,email,bdate;
    void accept_p()
    {
        cout<<"Enter Name Address EmailId and Birth date:";
        cin>>name>>addr>>email>>bdate;

    }
};
class Academic
{
    public:
    double tenth_mark,twelth_mark;
    void accept_Ac()
    {
        cout<<"Enter tenth marks:";
        cin>>tenth_mark;
        cout<<"Enter twelth marks:";
        cin>>twelth_mark;
    }
};

class bio_data:public Personnel,public Academic
{
    public:
    void display()
    {
        cout<<"\nName::"<<name;
        cout<<"\nAddress::"<<addr;
        cout<<"\nEmail Id::"<<email;
        cout<<"\nBirth date::"<<bdate;
        cout<<"\nTenth Marks::"<<tenth_mark;
        cout<<"\nTwelth Marks::"<<twelth_mark;
    }
};

int main()
{
    bio_data b;
    b.accept_p();
    b.accept_Ac();
    b.display();
}