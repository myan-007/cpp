#include <iostream>
using namespace std;
class Employee
{
private:
	string name;
	string city;
	int salary;
	float da;
	float hra;

public:
	void getData()
	{
		cout << "Enter name:";
		cin >> name;
		cout << "Enter city:";
		cin >> city;
		cout << "Enter salary:";
		cin >> salary;
		cout << "Enter da:";
		cin >> da;
		cout << "Enter hra:";
		cin >> hra;
	}
	void calculate()
	{
		cout << "Total: " << salary + (salary * (da / 100)) + (salary * (hra / 100)) << endl;
	}
	void display()
	{
		cout << "NAME :" << name << "\n";
		cout << "CITY :" << city << "\n";
		cout << "SALARY :" << salary << "\n";
		cout << "DA :" << salary * da/100 << "\n";
		cout << "HRA :" << hra*salary /100 << "\n";
	}\
};
int main()
{

	Employee e1;
	e1.getData();

	e1.calculate();
	e1.display();
}
