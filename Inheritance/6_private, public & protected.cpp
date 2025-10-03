//6. Write a C++ Program to show access to Private Public and Protected using Inheritance 

#include<iostream>
using namespace std;

class stud
{
	private : 
			 string s_name;
			 
	protected :
				int roll_no;
				
	public :
			int marks;
			
			void get_stud()
			{
				cout<<"\n\t Enter your Name : ";
				cin>>s_name;
			}
			
			void put_stud()
			{
				cout<<"\n\t Student Name : "<<s_name;
			}					 
};

class stud_per : public stud
{
	public :
			void get_info()
			{
				cout<<"\n\t Enter your Roll no : ";
				cin>>roll_no;
				
				cout<<"\n\t Enter your Total Marks of 6 Subjects : ";
				cin>>marks;
			}
			
			void put_info()
			{
				cout<<"\n\t Student's Roll no : "<<roll_no;
				cout<<"\n\t Student's Percentage : "<<marks;
			}
			
			
};

int main()
{
	stud_per s;
	
	s.get_stud();
	s.get_info();
	s.put_stud();
	s.put_info();
	
	return 0;
}
