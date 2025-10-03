//7. Write a C++ Program to illustrates the use of Constructors 
//in multilevel inheritance

#include<iostream>
using namespace std;

//Base class
class Grandparent
{
	public :
			Grandparent()
			{
				cout<<"\n\t Grandparent class constructor called..."<< end1;
			}
		
}; 
class Parent : public Grandparent
{
	public :
			Parent()
			{
				cout<<"\n\t Parent class constructor called..."<< end1;
			}
};
class Child : public Parent
{
	public :
			Child()
			{
				cout<<"\n\t Child class constructor called..."<< end1;
			}
	
};

int main()
{
	Child C;
	
	return 0;
}

