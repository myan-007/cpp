#include <iostream>
using namespace std;

void print(int a){
    cout << a << "\n";
}
void print(char a[]){
    cout << a << "\n";
}

struct employee
{
    int empid;
    char name[20];
    char designation[20];
    struct address
    {
        int houseno;
        char area[16];
        char city[16];
        char state[16];
    }address;

    void input(){
        cout << "Enter employee id:";
        cin >> empid;
        cout << "Enter employee name:";
        cin >> name;
        cout << "Enter employee designation:";
        cin >>designation;
        cout << "Enter employee houseno:";
        cin >>address.houseno;
        cout << "Enter employee area:";
        cin >> address.area;
        cout << "Enter employee city:";
        cin  >> address.city;
        cout << "Enter employee state:";
        cin  >> address.state;
    }
    void display(){

        cout << "Employee id:";
        print(empid);
        cout << "Employee name:";
        print(name);

        cout << "Employee designation:";
        print(designation);

        cout << "Employee houseno:";
        print(address.houseno);

        cout << "Employee area:";
        print(address.area);

        cout << "Employee city:";
        print(address.city);

        cout << "Employee state:";

        print(address.state);

    }
};
int main()
{
    employee e1;
    e1.input();
    e1.display();
    return 0;
}
