#include<iostream>
using namespace std;
int main(){
    cout << "Enter the 5 subjects :\n";
    int sum=0;
    for (int i = 0; i < 5; ++i)
    {
    	int x;
    	cin >> x;
    	sum+=x;
    }
    float pr;
    pr=(float)sum/5;

    if(pr>=80){ cout << "grade : A";}
    else if(pr>=60) {cout << "grade : B";}
    else if(pr>=40) {cout << "grade : C";}
    else {cout << "grade : D";}
}
