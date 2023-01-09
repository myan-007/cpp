#include<iostream>
using namespace std;
int main(){
    int t,ans=1;
    cout <<"Enter a number of fibonacci :";
    cin >> t;
    for (int i = 2; i <=t; i++)
    {
        ans*=i;
    }
    cout << ans;


    return 0;
}
