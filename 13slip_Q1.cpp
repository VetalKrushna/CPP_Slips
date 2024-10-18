/*1) Write a C++ program to create a class Distance with data members feet and inches. Write
member functions for the following:
a. To accept distance
b. To display distance
c. To add two distance objects
 (Use object as a function argument and function returning object). */

 #include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void accept()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		void disp()
		{
			cout<<"\nFeet = "<<feet<<"\nInches = "<<inches<<endl;
		}
		Distance add(Distance d1, Distance d2)
		{
            Distance sum;
			sum.feet = d1.feet + d2.feet;
			sum.inches = d1.inches + d2.inches;
			sum.feet = sum.feet + (sum.inches / 12);
			sum.inches =sum.inches % 12;
            return sum;
		}
};
int main()
{
	Distance d1, d2, d3,d4;
	d1.accept();
	d2.accept();
	d4=d3.add(d1,d2);
	d4.disp();
	
}