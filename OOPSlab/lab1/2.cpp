#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout <<"Enter the operand :";
	cin >> a >> b;
	cout <<"Enter the operator :";
	char c;
	cin >> c;


	if(c=='+'){
		cout << "Sum: "<< a+b;
	}
	else if(c=='-'){
		cout << "Difference: "<< a-b;
	}
	else if(c=='/'){
		cout << "Divide(a/b): "<< a/b;
	}
	else {
		cout << "product :" << a*b;
	}

	return 0;
}