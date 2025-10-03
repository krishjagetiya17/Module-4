/*
Assume that the test results of a batch of students are stored
in three differentclasses. Class Students are storing the roll 
number. Class Test stores the marks obtained in two 
subjects and class result contains the total marks obtained 
in the test. The class result can inherit the details of the 
marks obtained in the test and roll number of students.
(Multilevel Inheritance)
*/
#include<iostream>
using namespace std;

class Student
{
	protected:
			int rollno;
	
	public :
		    void get_Student()
		    {
		    	cout<<"\n\n\t Enter your Roll no : ";
		    	cin>>rollno;
		    	
			}
			void print_Student()
			{
				cout<<"\n\n\t Roll no : "<<rollno;
			}
};
class Test : public Student
{
   protected:
   		int sub1,sub2;
   
   public : 
          void get_Test()
		  {
		  	cout<<"\n\n\t Enter your Marks of Subject-1 :";
		  	cin>>sub1;
		  	cout<<"\n\n\t Enter your Marks of Subject-2 :";
		  	cin>>sub2;
		  }	
		  void print_Test()
		  {
		  	cout<<"\n\n\t Enter your Marks of Subject-1 :"<<sub1;
		  	cout<<"\n\n\t Enter your Marks of Subject-2 :"<<sub2;
		  }	
};
class Result : public Test
{
   
   public : 
           void print_Result()\
		   {
           	cout<<"\n\n\t Student Roll no :"<<rollno;
           	cout<<"\n\n\t Marks of Subject-1 :"<<sub1;
           	cout<<"\n\n\t Marks of Subject-2 :"<<sub2;
           	cout<<"\n\n\t Your Total Marks is : "<<sub1+sub2;
		   }
};

main(){
	
	Result R;
	
	R.get_Student();
	R.get_Test();
	R.print_Result();
	
}







