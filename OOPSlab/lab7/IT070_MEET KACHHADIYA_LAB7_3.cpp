#include <iostream>
using namespace std;
class Marks
{
protected:
	int sub_marks1, sub_marks2;

public:
	Marks()
	{
		cout << "Enter the subject 1 marks : ";
		cin >> sub_marks1;
		cout << "Enter the subject 2 marks : ";
		cin >> sub_marks2;
		cout << endl;
	}
};
class Total : public Marks
{
protected:
	int total_marks;

public:
	Total()
	{
		total_marks = sub_marks1 + sub_marks2;
	}
};
class Percentage : public Total 
{
protected:
	int x;

public:
	Percentage()
	{
		x = total_marks / 2;
	}

public:
	void print()
	{

		cout << "Subject 1 marks : " << sub_marks1 << endl;
		cout << "Subject 2 marks : " << sub_marks2 << endl;
		cout << "Total Marks : " << total_marks << endl;
		cout << "Percentage : " << x << endl;
	}
};

int main()
{
	int n;
	cout << "Enter the number of student : ";
	cin >> n;
	Percentage stud[n];
	for (int i = 0; i < n; i++)
	{

		stud[i].print();
	}
}