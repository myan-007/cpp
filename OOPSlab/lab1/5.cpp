#include<iostream>
using namespace std;
int main(){
	int y;
	cout << "Enter the year :";
	cin >> y;
	if(y%4==0 && y%100!=0){
		cout << "LEAP YEAR";
	}
	else{
		cout << "Not an leap year";
	}
	return 0;
}