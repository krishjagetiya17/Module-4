//4. Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;

class Student
{
	protected :
				string s_name;
				int roll_no,age;
					
	public :
				void get_student()
				{
					cout<<"\n\n\t Enter your Name here : ";
					cin>>s_name;
					
					cout<<"\n\n\t Enter your Roll no : ";
					cin>>roll_no;
					
					cout<<"\n\n\t Enter your Age : ";
					cin>>age;
				}		
};

class Marks
{
	protected : 
					float s1,s2,s3,s4,s5,s6;
					
	public :
					void get_marks()
					{
						cout<<"\n\n\t Enter your Marks of Your respected Subjects";
						
						cout<<"\n\n\t Maths : ";
						cin>>s1;
						
						cout<<"\n\n\t Science : ";
						cin>>s2;
						
						cout<<"\n\n\t English : ";
						cin>>s3;
						
						cout<<"\n\n\t S.S.T : ";
						cin>>s4;
						
						cout<<"\n\n\t Hindi : ";
						cin>>s5;
						
						cout<<"\n\n\t Gujarati : ";
						cin>>s6;
					}
};

class Result : public Student, public Marks
{
	private :
				float per,t_marks;
				string grade;
				
	public :
				void calculator()
				{
				    t_marks = s1+s2+s3+s4+s5+s6;
					per = t_marks/6;
					
					if(per>=90)
					{
						grade = "A+";
					}
					else if(per>=80)
					{
						grade = "A";
					}
					else if(per>=70)
					{
						grade = "B+";
					}else if(per>=60)
					{
						grade = "B";
					}
					else if(per>=50)
					{
						grade = "C+";
					}else if(per>=40)
					{
						grade = "C";
					}
				}
				
				void print_result()
				{
					cout<<"\n\n\t Name : "<<s_name;
					cout<<"\n\n\t Roll no : "<<roll_no;
					cout<<"\n\n\t Age : "<<age;
					
					cout<<"\n\n\t Marks Obtained in each Subjects....";
					
					cout<<"\n\n\t Maths : "<<s1;
					cout<<"\n\n\t Science : "<<s2;
					cout<<"\n\n\t English : "<<s3;
					cout<<"\n\n\t S.S.T : "<<s4;
					cout<<"\n\n\t Hindi : "<<s5;
					cout<<"\n\n\t Gujarati : "<<s6;
					
					cout<<"\n\n\t Total Marks Obtained : "<<t_marks;
					
					cout<<"\n\n\t Percentage : "<<per;
					
					cout<<"\n\n\t Grade : "<<grade;
				}
				
};

main()
{
	
	Result r;
	
	r.get_student();
	r.get_marks();
	r.calculator();
	r.print_result();
	
	return 0;
	
}







