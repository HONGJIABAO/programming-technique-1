//NAME: HONG JIA BAO 
//MATRIC NO: A24CS0251
//LAB EXERCISE 2
#include <iostream>
using namespace std;
int main ()
{
	int a, i, sum ;
	char choice ;
	
	
	do{
	
	cout<<"Enter an integer"<<endl;
	cin>>a;
	
	sum=0;
	
	do{
	i=a%10;
	sum=sum+i;
	a=a/10;
	}while (i>0);
	
    cout<<"\n Sum of the integer is "<<sum<<endl<<endl;
    
    if (sum%2==0)
    {
    	cout<<"This is even number"<<endl;
    	
    	if (sum%4==0 && sum%5==0 && sum%3==0)
    	{
    		cout<<"This is multiple of 3 & 4 & 5"<<endl<<endl;
		}
		else if (sum%3==0 && sum%4==0) 
		{
			cout<<"This is multiple of 3 & 4"<<endl<<endl;
		}
		else if (sum%3==0 && sum%5==0)
		{
			cout<<"This is multiple of 3 & 5"<<endl<<endl;
		}
		else if (sum%4==0 && sum%5==0)
		{
			cout<<"This is multiple of 4 & 5"<<endl<<endl;
		}
		else if (sum%3==0)
		{
			cout<<"This is multiple of 3"<<endl<<endl;
		}
		else if (sum%4==0)
		{
			cout<<"This is multiple of 4"<<endl<<endl;
		}
		else if (sum%5==0)
		{
			cout<<"This is multiple of 5"<<endl<<endl;
		}
		
	}
	
	else 
	{
		cout<<"This is odd number "<<endl;
		
		if (sum%4==0 && sum%5==0 && sum%3==0)
    	{
    		cout<<"This is multiple of 3 & 4 & 5"<<endl<<endl;
		}
		else if (sum%3==0 && sum%4==0) 
		{
			cout<<"This is multiple of 3 & 4"<<endl<<endl;
		}
		else if (sum%3==0 && sum%5==0)
		{
			cout<<"This is multiple of 3 & 5"<<endl<<endl;
		}
		else if (sum%4==0 && sum%5==0)
		{
			cout<<"This is multiple of 4 & 5"<<endl<<endl;
		}
		else if (sum%3==0)
		{
			cout<<"This is multiple of 3"<<endl<<endl;
		}
		else if (sum%4==0)
		{
			cout<<"This is multiple of 4"<<endl<<endl;
		}
		else if (sum%5==0)
		{
			cout<<"This is multiple of 5"<<endl<<endl;
		}
}
		cout<<"Do you want to do this again?"<<endl
		;
		cout<<"A=yes"<<endl;
		cout<<"B=no"<<endl;
		cout<<"A(yes) or B(no) ,please enter your choice"<<endl;
		cin>>choice;
		
	
}while(choice=='A');

	

	return 0;
}
