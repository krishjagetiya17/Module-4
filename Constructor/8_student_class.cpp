/*. Write a C++ program to implement a class called Student that
has privatemember variables for name, class, roll number, and
marks. Include member functions to calculate the grade based
on the marks and displaythe student's information. Accept
address from each student implement using of aggregation*/
#include<iostream>
using namespace std;
class address
{
     public:
          string add,city;
          address(string add,string city)
          {
               this->add=add;
               this->city=city;
          }

};
class student
{
     private:
          address *addr;
     public:
     int s_rollno,mark,s_class,s1,s2,s3,s4,s5,per;
     string name;
     student(int s_rollno,string name,int s_class,address *addr)
     {
          this->s_rollno=s_rollno;
          this->name=name;
          this->s_class=s_class;
          this->addr=addr;
          cout<<"\n\t Enter Marks for Subject-1 :";
          cin>>s1;
          cout<<"\n\t Enter Marks for Subject-2 :";
          cin>>s2;
          cout<<"\n\t Enter Marks for Subject-3 :";
          cin>>s3;
          cout<<"\n\t Enter Marks for Subject-4 :";
          cin>>s4;
          cout<<"\n\t Enter Marks for Subject-5 :";
          cin>>s5;
          
     }
     void grade()
     {
          mark = s1 + s2 + s3 + s4 + s5;
          per = mark / 5;
          
     }
     void Print()
     {
          cout<<"\n\t Student rollno : "<<s_rollno;
          cout<<"\n\t Student Name : "<<name;
          cout<<"\n\t Student Class : "<<s_class;
          cout<<"\n\t Student ADD : "<<addr->add;
          cout<<"\n\t Student City : "<<addr->city;
          cout<<"\n\t Student marks :"<<mark;
          if(per > 90) {
             cout << "\n\n\t A+ Grade ";
            }
            else if(per > 80 && per <= 90) {
               cout << "\n\n\t A Grade ";
            }
            else if(per > 70 && per <= 80) {
               cout << "\n\n\t B+ Grade ";
            }
            else if(per > 60 && per <= 70) {
              cout << "\n\n\t B Grade ";
            }
            else if(per > 50 && per <= 60) {
               cout << "\n\n\t C+ Grade ";
            }
            else if(per > 40 && per <= 50) {
                cout << "\n\n\t C Grade ";
            }
            else if(per > 33 && per <= 40) {
              cout << "\n\n\t D Grade ";
            }
            else {
              cout << "\n\n\t Fail ";
            }

     }

};
int main()
{
     address a("New Ranip","Ahemdabad");
     student s( 17, "Krish", 12,&a);
     s.grade();
     s.Print();
}