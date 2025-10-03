/*
person = roll no, name, age;
student = sub1,2,3, total marks, per;
teacher = salary;
*/

#include<iostream>
using namespace std;

class Person
{
	protected :
	int rollno,age;
	string pname;
	
	public :
		   void get_Person()
		   {
		   	 cout<<"\n\n\t Enter your Roll no :";
		   	 cin>>rollno;
		   	 cout<<"\n\n\t Enter your Name :";
		   	 cin>>pname;
		   	 cout<<"\n\n\t Enter your Age :";
		   	 cin>>age;
		   	
		   }
		   
		   
};

class Student
{
	protected :
	int sub1,sub2,sub3,t_marks;
	float per;
	
	public : 
	       void get_Student()
	       {
	       	cout<<"\n\n\t Enter your Subject-1 marks :";
	       	cin>>sub1;
	       	cout<<"\n\n\t Enter your Subject-2 marks :";
	       	cin>>sub2;
	       	cout<<"\n\n\t Enter your Subject-3 marks :";
	       	cin>>sub3;
	       	
	       	
		   }
		   
		   void calc()
		   {
		   	cout<<"\n\n\t Total marks is :"<<sub1+sub2+sub3;
		   	
		   	cout<<"\n\n\t Your Percentage is :"<<(sub1+sub2+sub3)/3;
		   }
		   
		   
};

class Teacher : public Person, public Student
{
	protected :
	int salary;
	
	public :
		 void get_Teacher()
		 {
		 	cout<<"\n\n\t Enter your Salary :";
		 	cin>>salary;
		 }
		 
		 void print_Teacher()
		 {
		 	cout<<"\n\n\t Name :"<<pname;
		 	cout<<"\n\n\t Roll no :"<<rollno;
		 	cout<<"\n\n\t Age :"<<age;
		 	cout<<"\n\n\t sub-1 :"<<sub1;
		 	cout<<"\n\n\t sub-2 :"<<sub2;
		 	cout<<"\n\n\t sub-3 :"<<sub3;
		 	cout<<"\n\n\t Enter your Salary :"<<salary;
		 }
};


main()
{
	
	Teacher T;
	
	T.get_Person();
	T.get_Student();
	T.get_Teacher();
	T.print_Teacher();
	T.calc();
}






