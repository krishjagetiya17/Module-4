//2. Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class Rectangle
{
	protected : 
				float l,w,A;
	
	public : 
				
				void get_data()
				{
					cout<<"\n\n\t Enter the Length of Rectangle : ";
					cin>>l;
					
					cout<<"\n\n\t Enter the Width of Rectangle : ";
					cin>>w;
				}
				
				void print_data()
				{
					cout<<"\n\n\t Length of Your Rectangle is = "<<l;
					
					cout<<"\n\n\t Width of Your Rectangle is = "<<w;
				}
				
};

class Area : public Rectangle
{
	public :
				
				void print_area()
				{
					
					cout<<"\n\n\t Area of the Rectangle is : "<<l*w;
					
				}
};

main()
{
	Area A;
	
	A.get_data();
	A.print_data();
	A.print_area();
	
	return 0;
}
