#include <iostream>
using namespace std;

class student
{
private:
    char name[20];
    int marks;

public:
    void getdata()
    {
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the Marks : ";
        cin >> marks;
    }
    void printdata()
    {
        cout << "NAME :- " << name << "\tMARKS :- " << marks;
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of student : ";
    cin >> n;
    student *ptr = new student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter detail of student " << i + 1 << endl;
        (ptr + i)->getdata();
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        (ptr + i)->printdata();
    }
    return 0;
}