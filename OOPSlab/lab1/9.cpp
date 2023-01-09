#include<iostream>
#define N 10
using namespace std;
int  main(){
    int a=0,b=1;
    cout << a << " " << b << " ";
    int i=0;
    while (true)
    {
        int c=a+b;
        cout << c << " ";
        a=b;
        b=c;
        i++;
        if(i==N) break;
    }
    return 0;
}
