#include<iostream>
using namespace std;
void swap(int& a,int &b){
 int t;
 t=a;
 a=b;
 b=t;
}
void swap(float& a,float& b){
 float t;
 t=a;
 a=b;
 b=t;
}
int main(){
	int a,b;
	cout << "Enter 2 integer number :";
	cin >> a >> b;
	swap(a,b);
	cout << "a: " << a << "b: " <<b <<"\n";

	
	float x,y;
	cout << "Enter 2 float number :";
	cin >> x >> y;
	swap(x,y);
	cout << "x: " << x << "y: " << y;

	return 0;
}