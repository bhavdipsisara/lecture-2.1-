#include<iostream>
using namespace std;

class Car
{
	public:
	int id,release_year;
	char model[100],color[100],company_name[100];
};

main()
{
	Car e[4];
	
	for(int i=0;i<4;i++)
	{
		cout<<"Enter Car id = ";
		cin>>e[i].id;
		cout<<"Enter Car company_name = ";
		cin>>e[i].company_name;
		cout<<"Enter Car color = ";
		cin>>e[i].color;
		cout<<"Enter Car model = ";
		cin>>e[i].model;
		cout<<"Enter Car release_year = ";
		cin>>e[i].release_year;
		
	}
	for(int i=0;i<4;i++)
	{
		cout<<"Id = "<<e[i].id<<endl;
		cout<<"Company_Name = "<<e[i].company_name<<endl;
		cout<<"Color = "<<e[i].color<<endl;
		cout<<"Model = "<<e[i].model<<endl;
		cout<<"Release_year = "<<e[i].release_year<<endl;
			
	}
}