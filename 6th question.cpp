#include <iostream>
using namespace std;
int main()
{

    int arr[10];
    
    cout<<"Enter the ten array elements : ";
    for(int i=1; i<=10; i++)
    {
    	cin>>arr[i];
	}
	
	for(int j=1; j<=10; j++)
	{
		if(arr[j] < 0)
		{
		cout<<""<<arr[j]<<"\t";
	    }

	}
	
		for(int j=1; j<=10; j++)
	{
		if(arr[j] > 0)
		{
		cout<<""<<arr[j]<<"\t";
	    }

	}
	
return 0;	
}
