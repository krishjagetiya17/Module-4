//4. Write a C++ program to implement a class called Circle 
//that has private member variables for radius.
//Include member functions to calculate the circle's area and circumference.

#include<iostream>
using namespace std;

class Circle{
	
	private :     
				float r,area,cir;
				
	public :
				
				void get_values(){
					
					cout<<"\n\n\t Enter the Radius of Circle : ";
					cin>>r;
				}
				
				void put_values(){
					
					cout<<"\n\n\t Your Circle's Radius is = "<<r;
				}
				
				void Area(){
					
					cout<<"\n\n\t Area of the Circle = "<<3.14*r*r;
				}
				
				void Circumference(){
					
					cout<<"\n\n\t Circumference of the Circle = "<<2*3.14*r;
					
				}
	
	
};

int main()
{
	
	Circle C;
	
	C.get_values();
	
		cout<<"**************************************************************";
	
	C.put_values();
	C.Area();
	C.Circumference();
	
		cout<<"\n**************************************************************";
	
	
	return 0;
	
}
