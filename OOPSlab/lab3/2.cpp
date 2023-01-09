#include<iostream>
using namespace std;
void swap(int&,int&,int&);
int main(){

    int a=1,b=2,c=3;

    swap(a,b,c);

    cout << "a="<< a << " b=" << b << " c=" << c;
    return 0;
}

void swap(int& a,int& b,int& c){

    int t;
    t=a;
    a=c;
    c=t;
    t=b;
    b=c;
    c=t;

}
