//12. Write a program to swap the two numbers using friend function without using third variable 
#include<iostream>
using namespace std;

class Swapping 
{
	private :
			
			int a,b,c;
			
	public : 
			
			void get_value()
			{
				cout<<"\n\t Enter your Value of a : ";
				cin>>a;
				cout<<"\n\t Enter your Value of b : ";
				cin>>b;
				
				cout<<"\n\n\t Before Swapping ....";
				cout<<"\n\t a = "<<a;
				cout<<"\n\t b = "<<b;
			}
			friend void put_value(Swapping C);
						
};

void put_value(Swapping C)
{
	C.c = C.a;
	C.a = C.b;
	C.b = C.c;
	
	cout<<"\n\n\t After Swapping ....";
	cout<<"\n\t a = "<<C.a;
	cout<<"\n\t b = "<<C.b;
}

int main()
{
	Swapping S;
	
	S.get_value();
	put_value(S);
}

