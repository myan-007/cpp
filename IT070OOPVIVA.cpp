#include <iostream>
using namespace std;
class Rectangle
{
private:
    int l;
    int b;
public:
    Rectangle(int r=0,int i=0){
        l=r;
        b=i;
    }
    void display()
    {
        cout << "Length :" << l << "\nBreadth :"<<b <<endl;
    }
    friend Rectangle operator+(Rectangle c1,Rectangle c2);
 };

Rectangle operator+(Rectangle c1,Rectangle c2)
{
    Rectangle temp;
    temp.l=c1.l+c2.l;
    temp.b=c1.b+c2.b;
    return temp;
}
int main()
{
    cout << "Enter Lenght and Breadth of first rectangle:";
    int a,b;
    cin >> a >> b;
    Rectangle r1(a,b);
    cout << "Enter Lenght and Breadth of second rectangle:";
    cin >> a >> b;
    Rectangle r2(a,b);
    Rectangle r3;
    r3=r1+r2;
    r3.display();



}