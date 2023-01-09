#include<iostream>
using namespace std;

class Myclass{
	static int totalob,activeob;
public:
	Myclass(){
		totalob+=1;
		activeob+=1;
	}
	~Myclass(){
		activeob--;
	}
	void show(){
		cout << "Total Objects are : " << totalob << "\nTotal active objects are :" << totalob << "\n";
	}
};
int Myclass::totalob=0,activeob=0;
int main()
{
	Myclass obj1; //total objects=1, Active objects=1
	obj1.show();
	{
	Myclass obj1,obj2; //total objects=3, Active objects=3
	obj2.show();
	}
	obj1.show(); //total objects=3, Active objects=1
	Myclass obj2,obj3;
	obj2.show(); //total objects=5, Active objects=3
}