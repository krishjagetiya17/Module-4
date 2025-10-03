//5. Write a C++ program to create a class called Rectangle 
//that has private member variables for length and width. 
//Implement member functions to calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;

class Rectangle
{
	
	private :
				float l,w;
				
	public :
				void get_value()
				{
					
					cout<<"\n\n\t Enter the Length of Rectangle : ";
					cin>>l;
					
					cout<<"\n\n\t Enter the Width of Rectangle : ";
					cin>>w;
					
				}	
				
				void put_value()
				{
					
					cout<<"\n\n\t Length = "<<l;
					cout<<"\n\n\t Width = "<<w;
					
				}		
				
				void Perimeter()
				{
					
					cout<<"\n\n\t Perimeter of the Rectangle is = "<<(l+w)*2;
					
				}
				
				void Area()
				{
					
					cout<<"\n\n\t Area of the Rectangle is = "<<l*w;
					
				}
	
};

int main()
{
	
	Rectangle R;
	
	R.get_value();
	
		cout<<"------------------------------------------------";
		
	R.put_value();
	R.Perimeter();
	R.Area();
	
		cout<<"\n------------------------------------------------";
		
	return 0;
	
}
