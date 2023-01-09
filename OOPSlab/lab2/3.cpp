#include<iomanip>
#include<iostream>
using namespace std;
int main(){

    back:
    double a,b;
    cout << "Enter both number";
    cin >> a >> b;
    if(b==0){
        cout << "Divisor can\'t be 0\n";
        goto back;
    }
    else{
        cout << fixed << setprecision(2) << "Quotient: " << (double)a/b << " \n";
        cout << "Remainder: " << (int)a%(int)b << " \n";
    }
 

    return 0;
}
