#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "Enter the number :";
	cin >> a;
	bool f=true;
	for (int i = 2; i<a; ++i)
	{
		if(a%i==0){
			f=false;
			cout<< "number is composite";
			break;
		}
	}
	if(f){
		cout << "Number is prime";
	}
	return 0;
}


