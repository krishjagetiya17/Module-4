//WAP to create an Calculator using c++.

#include<iostream>
using namespace std;

class Calculator
{
		int a,b;
		
	public:
					void get_num(){
						
						cout<<"\n\n\t Enter the Value of a : ";
						cin>>a;
						
						cout<<"\n\n\t Enter the Value of b : ";
						cin>>b;
					}
					
					void put_num(){
						
						cout<<"\n\n\t Num1= "<<a;
						cout<<"\n\n\t Num2= "<<b;
						
					}
					
					void add();
					void sub();
					void mul();
					void div();
					
};


	void Calculator :: add()
	{
		
		cout<<"\n\n\t Addition = "<<a+b;
		
	}
	
	void Calculator :: sub()
	{
		
		cout<<"\n\n\t Subtraction = "<<a-b;
		
	}
	
	void Calculator :: mul()
	{
		
		cout<<"\n\n\t Multiplication = "<<a*b;
		
	}

	void Calculator :: div()
	{
		
		cout<<"\n\n\t Division = "<<a/b;
		
	}


main()
{
	
	Calculator C;
	
	C.get_num();
	C.put_num();
	C.add();
	C.sub();
	C.mul();
	C.div();
}
