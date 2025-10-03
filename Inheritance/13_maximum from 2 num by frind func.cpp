//13. Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class Maximum
{
	private :
		
		int a,b;
		
	public :
		
		void get_value()
		{
			cout<<"\n\t Enter your First Value :";
			cin>>a;
			cout<<"\n\t Enter your Second Value :";
			cin>>b;
			
			cout<<"\n\t First Value : "<<a;
			cout<<"\n\t Second Value : "<<b;
		}
		friend void put_value(Maximum M);
		
};
void put_value(Maximum M)
{
	if(M.a>M.b)
		cout<<"\n\n\t Maximum Number is : "<<M.a;
	else{
		cout<<"\n\n\t Maximum Number is : "<<M.b;
	}	
}

int main()
{
	Maximum M;
	
	M.get_value();
	put_value(M);
}

