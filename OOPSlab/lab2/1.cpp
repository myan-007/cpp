#include<iostream>
using namespace std;
void add(){
    int a,b;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    cout << "Sum of both number is: " << a+b <<"\n";
}
void check(int a){
    if(a%2==0) cout << "Number is even";
    else cout << "Number is odd";
}
void print(int a){
    int i=1;
    while(a--){
        cout << i <<" ";
        i++;
    }
}
int main(){
    
    while(true){
        int i;

        cout <<" Enter 1 for addition\n";
        cout <<" Enter 2 for checking even and odd\n";
        cout <<" Enter 3 for printing first natural number\n";
        cin >>  i;


        if(i==1){
           add() ;
        }
        else if(i==2){
            int a;
            cout << "Enter first number:";
            cin >> a;
            check(a);
        }
        else if(i==3){
            int a;
            cout << "Enter a number:";
            cin >> a;
            print(a);
        }
        else{
            cout << "Enter a valid input\n";
            break;
        }
    }



    return 0;
}
