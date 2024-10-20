/*Q.1) Write a C++ program to create a class ‘MyMatrix’ which contains two-dimensional
integer array of size mXn. Write a member function to display sum of all elements of
entered matrix. <<Use Dynamic Constructor for allocating memory and Destructor to free
memory of an object). */


#include<iostream>
using namespace std;
class MyMatrix
{
    public:
    int **a,m,n,i,j,s=0;
    MyMatrix(int m,int n)
    {
        this->m=m;
        this->n=n;

        a=new int *[m];
         for(i=0;i<m;i++)
         {
           a[i]=new int[n];
         } 

      cout<<"Enter matrix :\n";
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
      }
    }
    void display()
    {
     for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
      }
     cout<<"\n\nSum of all elements of matrix:"<<s;
     }
    
    ~MyMatrix()
    {
        for(int i=0;i<m;i++)
        {
            delete []a[i];
        }
        delete []a;
        cout<<"\nMemory free...";
    }
};

int main()
{
    int m,n;
   cout<<"Enter raws and cols :";
   cin>>m>>n;

   MyMatrix ob(m,n);
   ob.display();


}