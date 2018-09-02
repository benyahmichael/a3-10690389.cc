#include <iostream>
 
using namespace std; 

int main() 
{
	// declare and initialise variables
	
int i, n, avg;
	
int sum=0;
	
cout<<"please enter score"<<endl;
	
cin>>n;
	
	
for (i=0; i<=5; i++)
	
sum=sum+n;
	
avg=sum/5;
	
if (avg/5)
	
	{
		
		cout<<"failed"<<endl;
	}
	
else
	
	{
		
		cout<<"passed"<<endl;
	
	}
	
	return 0;
}
