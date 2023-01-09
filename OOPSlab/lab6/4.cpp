#include<iostream>
#include <math.h>
using namespace std;


class Polar{
public:
	double r;
	double a;
public: 
	Polar(){

	}
	Polar(double a,double b){
		this->r=a;
		this->a=b;
	}

};


class Rec{
public:
	double x;
	double y;
public: 
	Rec(){
		x=0;y=0;
	}
	Rec(double a,double b){
		this->x=a;
		this->y=b;
	} 
	void operator =(Polar &a){
		x=a.r*cos(a.a*3.14/180);
		y=a.r*sin(a.a*3.14/180);
	}
};




int main(){
	Polar p(23,45);
	Rec r;
	r=p;
	cout <<"X:"<<r.x << "\nY:" << r.y;
	return 0;
}