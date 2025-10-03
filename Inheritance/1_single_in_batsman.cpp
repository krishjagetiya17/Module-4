/*Assume a class cricketer is declared. Declare a derived class 
batsman from cricketer. Data member of batsman. Total 
runs, Average runs and best performance. Member functions 
input data, calculate average runs, Display data. (Single 
Inheritance)
*/
#include<iostream>
using namespace std;

class Cricket
{
	protected :
			  int age,T_match;
			  string cname;
	
	public :
		    void get_Cricket()
		    {
		    	cout<<"\n\n\t Enter your Name :";
		    	cin>>cname;
		    	cout<<"\n\n\t Enter your Age :";
		    	cin>>age;
		    	cout<<"\n\n\t How many Matches you Played :";
		    	cin>>T_match;
		    	
			}
			void print_Cricket()
			{
				cout<<"\n\n\t  Name :"<<cname;
		    	cout<<"\n\n\t  Age :"<<age;
		    	cout<<"\n\n\t How many Matches you Played :"<<T_match;
			}
};
class Batsman : public Cricket
{
	int T_run,a_run,b_per;
	
	public : 
	        void get_Batsman()
	        {
	        	cout<<"\n\n\t Enter your Total Runs :";
	        	cin>>T_run;
	        	cout<<"\n\n\t Enter your Best Performance :";
	        	cin>>b_per;
	        	
			}
			void average()
			{
				cout<<"\n\n\t Your Average Runs are : "<<T_run/T_match<<a_run;
			}
			
			void print_Batsman()
	        {
	        	cout<<"\n\n\t Enter your Total Runs :"<<T_run;
	        	cout<<"\n\n\t Enter your Best Performance :"<<b_per;
			}
			
};

main(){
	Batsman B;
	B.get_Cricket();
	B.get_Batsman();
	
	B.average();
	
	B.print_Cricket();
	B.print_Batsman();
}
