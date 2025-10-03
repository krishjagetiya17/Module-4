//11. Write a program to calculate the area of circle,rectangle and triangle using Function Overloading 
//Rectangle: Area * breadth 
//Triangle: ½ *Area * breadth 
//Circle: Pi * Area * Area 
#include<iostream>
using namespace std;

class info
{
	private :
		      int a;
		      
	public :
			void area(float l, float b)
			{
				a = l * b ;
				cout<<"\n\n\t Area of Rectangle is : "<<a;
			}
			
			void area(float b, float n, float h)
			{
				a = n * b * h ;
				cout<<"\n\n\t Area of Triangle is : "<<a;
			}
			
			void area(float r)
			{
				a = 3.14 * r * r ;
				cout<<"\n\n\t Area of Circle is : "<<a;
			}
	
		      
};

int main()
{
	info i;
	
	i.area(5,4);
	i.area(0.5,10,5);
	i.area(10);
}
