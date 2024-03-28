#include<iostream>
using namespace std;

class Employee
{
	public:
	int id,age,experience,salary;
	char name[100],role[100],city[100],company_name[100];
};

main()
{
	Employee e[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Employee id = ";
		cin>>e[i].id;
		cout<<"Enter Employee name = ";
		cin>>e[i].name;
		cout<<"Enter Employee age = ";
		cin>>e[i].age;
		cout<<"Enter Employee role = ";
		cin>>e[i].role;
		cout<<"Enter Employee salary = ";
		cin>>e[i].salary;
		cout<<"Enter Employee city = ";
		cin>>e[i].city;
		cout<<"Enter Employee experience = ";
		cin>>e[i].experience;
		cout<<"Enter Employee company name = ";
		cin>>e[i].company_name;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Id = "<<e[i].id<<endl;
		cout<<"Name = "<<e[i].name<<endl;
		cout<<"Age = "<<e[i].age<<endl;
		cout<<"Role = "<<e[i].role<<endl;
		cout<<"Salary = "<<e[i].salary<<endl;
		cout<<"City = "<<e[i].city<<endl;
		cout<<"Experience = "<<e[i].experience<<endl;
		cout<<"Company_name = "<<e[i].company_name<<endl;
		
		
	}
}