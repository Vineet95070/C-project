#include <iostream>
using namespace std;
int main()
{
	int time;
	
	cout<<"Enter the Time required by Worker : ";
	cin>>time;
	
	if(time >=1)
	{
		if(time >=1 && time <=3)
		{
			cout<<"Highly efficient Worker : ";
		}
		else if(time >=3 && time <=4)
		{
			cout<<"Worker is order to increase their speed : ";
		}
		else if(time >=4 && time <=5)
		{
			cout<<"Worker have to take training to improve his speed : ";
		}
		else if(time > 5)
		{
			cout<<"Worker have to leave the Company :";
		}
	}
	else
	cout<<"Invalid input :";
		
return 0;	
}
