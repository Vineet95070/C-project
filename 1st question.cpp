#include <iostream>
#include <string.h>
using namespace std;

class bcah
{
	
	private : 
	
	int marks, age, m1,m2, m3, m4, m5, m6, t;
	string name;
	float per, sgpa; 
	char roll[15], clas[10], clg[10];
	
	public :
		
		get()
		{
			cout<<"Enter the Name : ";
			getline(cin, name);
			cout<<"Enter the Roll No : ";
			cin>>roll;
			cout<<"Enter the Age : ";
			cin>>age;
			cout<<"Enter the program : ";
			cin>>clas;
		}
		
	public :
	
	    put()
		{
			cout<<"\n\n\tVineet : "<<name<<endl;
			cout<<"\tRoll No : "<<roll<<endl;
			cout<<"\tAge : "<<age<<endl;
			cout<<"\tProgram : "<<clas<<endl;
		}	
		
	public :
	   
	   getmarks()
	   {
	   	
	   	    cout<<"\n\n\tEnter the Student End term marks out of '40' : "<<endl;
	   	    cout<<"\t201 - Discrete Maths : ";
	   	    cin>>m1;
	   	    cout<<"\t202 - Object Orienterd Programming in C++ : ";
	   	    cin>>m2;
	   	    cout<<"\t203 - EVS : ";
	   	    cin>>m3;
	   	    cout<<"\t204 - Operating System : ";
	   	    cin>>m4;
	   	    cout<<"\t205 - DBMS : ";
	   	    cin>>m5;
	   	    cout<<"\t206 - Seminar : ";
	   	    cin>>m6;
	   	    
       }
       
    public :
	   
	   total()
	   {
	   	
 	
        	per = (m1+m2+m3+m4+m5+m6)/6;
        	sgpa = per/10;
	
	        cout<<"\n\n\n\tPercentage : "<<per<<"%"<<endl;
	        cout<<"\tSGPA : "<<sgpa;
	
	   	   
	   }   
};

int main()
{
	
	bcah s1;
	s1.get();
	s1.put();
	s1.getmarks();
	s1.total();
	
return 0;	
}
