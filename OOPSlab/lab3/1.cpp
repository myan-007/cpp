#include<iostream>
#define N 100
using namespace std;
struct Distance{
public:
    int feet;
    float inches;
    Distance(int f,float i){
        feet=f;
        inches=i;
    }
    Distance(){

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

void Add(Distance d){

    if((int)(inches+d.inches)%12 > 1){
    
        cout << "Total feets :" << feet + d.feet+(inches + d.inches)/12 << "\n";
        cout << "Total inches :" << (int)(inches+d.inches)%12 << "\n";

    }
    else
        cout << "Total feets :" << feet + d.feet <<"\n";
        cout << "Total inches :" << (inches + d.inches) << "\n";

}
};
int main(){
    
    struct Distance d1,d2,d3;
    d1.input();
    d2.input();

    d2.Add(d1);
    d2.display();


    return 0;
}

