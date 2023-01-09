
#include<iostream>
using namespace std;

class Person{
private : 
	string name;
	int age;
public:

	Person()
	{
		name = "";
		age = 0;
	}

	void getPerson()
	{
		cout << "Enter person name : " ;
		cin >> name;
		cout << "Enter persons's age : " ;
		cin >> age;
	}

	void showPerson()
	{
		cout << "Name : " << name << " Age : " << age << "\n";
	}
};

class Student : public Person{
private: 
		int roll_no;
		string branch;
public:
		Student()
		{
			roll_no = 0;
			branch = "";
		}

		void getStudent()
		{
			cout << "Enter Roll NO : " ;
			cin >> roll_no;
			cout << "Enter Branch name : ";
			cin >> branch;
		}

		void showStudent()
		{
			cout << "Roll No : " << roll_no << "\nBranch Name : " << branch << endl;
		}
};

class Exam : public Student{
private:
		float sub1Marks;
		float sub2Marks;
public:

		Exam()
		{
			sub2Marks  = sub1Marks = 0;
		}

		void getExam()
		{
			getPerson();
			getStudent();
			cout << "Two subjects marsk : " ;
			cin >> sub1Marks >> sub2Marks;
		}

		void showExam()
		{
			showPerson();
			showStudent();
			cout << "Marks of 2 subjects :  " << sub1Marks << " " << sub2Marks << "\n";			
		}
};

int main()
{
	Exam e1;
	
	// Getting the details
	e1.getExam();

	// Printing the details
	e1.showExam();	

	return 0;
}