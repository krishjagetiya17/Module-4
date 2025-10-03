/*
Write a program to Mathematic operation like Addition,
Subtraction, Multiplication, Division Of two number using 
different parameters and Function Overloading
*/
#include<iostream>
using namespace std;

class Calculator
{
	int a,b;
	public :
			void add(int x, int y)
			{
				a=x;
				b=y;
				cout<<"\n\n\t Addition = "<<x+y;
			}
			void sub(int x, int y)
			{
				a=x;
				b=y;
				cout<<"\n\n\t Subtraction = "<<x-y;
			}
			void mul(int x, int y)
			{
				a=x;
				b=y;
				cout<<"\n\n\t Multiplication = "<<x*y;
			}
			void div(float x, float y)
			{
				a=x;
				b=y;
				cout<<"\n\n\t Division = "<<x/y;
			}
};

main()
{
	int a,b;
	cout<<"\n\n\t Enter your First Value :";
	cin>>a;
	cout<<"\n\n\t Enter your Second Value :";
	cin>>b;
	
	Calculator C;
	C.add(a,b);
	C.sub(a,b);
	C.mul(a,b);
	C.div(a,b);
}
