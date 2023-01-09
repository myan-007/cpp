#include<iostream>
using namespace std;
class Dist{
private:
	int feet;
	float inches;
public:
	Dist(){

	}
	Dist(int a,float b){
		feet =a;
		inches=b;
	}
	void input(){
		cout << "Enter number of feet";
	    cin >> feet;
	    cout << "Enter number of inches";
	    cin >> inches;
	}

	void display(){
	   
	    cout << "Feet\t\t" << "Inches\n";
	    cout << feet << "\t\t" << inches << "\n";
	
	}

	void subtract(Dist d){
		float ans;
		ans=d.feet*12+d.inches - (feet*12 + inches);
		cout << "FEET :" << ans/12<<"\n";
		cout << "INCHES :" << (int)ans%12<<"\n";
	}

	void compare(Dist d){
		if((d.feet*12 + d.inches) > (feet*12 + inches)){
			cout << (d.feet*12 + d.inches) << "inches is greater"<<"\n";
			return;
		}
			cout << (feet*12 + inches) << "inches is greater"<<"\n";
		}
};
int main(){

	Dist d1,d2;
	d1.input();
	d2.input();

	d1.display();
	d2.display();

	d1.compare(d2);

	d1.subtract(d2);
	d1.display();

	return 0;
}