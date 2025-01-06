//lab exercise 3
//name : HONG JIA BAO
// MATRIC NO: A24CS0251
//Date :19/12/2024

#include <iostream>
using namespace std;

void dispStatus(int);
void getInput(int&, int&, int&, int&);
void dispOutput(int&, int,int,int,int);
float calcAverage(int,int,int&, float& );

int main()
{
	string state_name, highest_name=" ";
	int total_cases, new_cases,total_death,total_recovered,active_cases,count=0,highest=0,total=0;
	float average=0;
	char ch;
	do{
		count++;
		cout<<"<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>"<<endl;
		cout<<"State name :";
		getline(cin, state_name);
		getInput(total_cases,new_cases,total_death,total_recovered);
		cout<<"<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>"<<endl;
		dispOutput(active_cases, total_cases, new_cases, total_death, total_recovered);
		if(active_cases>highest)
		{
			highest=active_cases;
			highest_name= state_name;
		}
		calcAverage(count,active_cases, total, average);
		cout<<"Press <Enter> to continue.....";
		cin.get(ch) ;
		if (ch!='\n')
		{
			break;
		}
		
}while (1);
cout<<"<<<<<<<<< ACTIVE CASES >>>>>>>>>>"<<endl;
cout<<"Total :"<<total<<endl;
cout<<"Highest: "<<highest<<"("<<highest_name<<")"<<endl;
cout<<"Average of "<<count<<" states :"<<average<<endl;
}

void getInput(int& total_cases, int& new_cases, int& total_death, int& total_recovered)
{
	cout<<"Total cases :";
	cin>>total_cases;
	cout<<endl;
	while(total_cases<0)
	{
		cout<<"Total cases :";
	cin>>total_cases;
	cout<<endl;
	}
	
	cout<<"New cases : ";
	cin>>new_cases;
	cout<<endl;
	while(new_cases<0)
	{
		cout<<" New cases :";
	cin>>new_cases;
	cout<<endl;
	}
	
	cout<<"Total death :";
	cin>>total_death;
	cout<<endl;
	while(total_death<0)
	{
		cout<<" Total death :";
	cin>>total_death;
	cout<<endl;
	}
	
	cout<<"Total recovered:";
	cin>>total_recovered;
	cout<<endl;
	while(total_recovered<0)
	{
		cout<<" Total recovered:";
	cin>>total_recovered;
	}
	cin.ignore();
}

void dispStatus(int active_cases)
{
	
	if (active_cases==0)
	{
		cout<<"Status : Green zone"<<endl;
	}
	else if ((active_cases>=1)&&(active_cases<=20))
	{
		cout<<"Status : Yellow zone"<<endl;
	}
	else if ((active_cases>=21)&&(active_cases<=40))
	{
		cout<<"Status : Orange zone"<<endl;
	}
	else if (active_cases>40)
	{
		cout<<"Status : Red zone"<<endl;
	}
	else 
	{
		cout<<"Invalid"<<endl;
	}
	
	

}

void dispOutput(int& active_cases,int total_cases,int new_cases,int total_death,int total_recovered)
{
	active_cases= total_cases+new_cases-total_death-total_recovered;
	cout<<"Active cases :"<<active_cases<<endl;
	dispStatus(active_cases);
}

float calcAverage(int count,int active_cases,int& total, float& average)
{
	total=total+active_cases;
	average=total/count;
}






