#include <iostream>
using namespace std;
class Room
{
private:
	struct dis
		{
		
			double feet;
			double inches;
		};
	dis length;
	dis width;

public:
	void getData()
	{
		cout << "Enter length in feet and inches :";
		cin >> length.feet >> length.inches;
		cout << "Enter width in feet and inches :";
		cin >> width.feet >> width.inches;
	}
	void calculate()
	{
		cout << "AREA OF ROOM :\n";
		cout << (length.feet+(length.inches)/12)*(width.feet+(width.inches)/12);
	}
	Room add(Room a,Room b){
		Room t;
		t.length.feet= a.length.feet + b.length.feet;
		t.width.feet = a.width.feet+b.width.feet;
		return t;

	}
};
int main()
{
	Room r1,r2,r3;
	r1.getData();
	r2.getData();
	r3 =r3.add(r1,r2);
	r3.calculate();


	
	return 0;
}
