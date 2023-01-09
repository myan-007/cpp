#include<iostream>
using namespace std;
class complex{
public:
	float real;
	float img;

public: 
	complex(){

	}
	complex(float a,float b){
		real=a;
		img=b;
	}

	void operator +=(complex &a){
		real+=a.real;
		img+=a.img;
}


};
int main(){


	complex c1(2.3,4.5),c2(3.5,2.6);
	cout << "\nc1 : Real : "<<  c1.real << "\nImaginary :" << c1.img;
	cout << "\nc2 : Real : "<<  c2.real << "\nImaginary :" << c2.img;
	c1+=c2;

	cout << "\nc1 : Real : "<<  c1.real << "\nImaginary :" << c1.img;


	return 0;
}