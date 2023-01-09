#include<iostream>
#include<array>
using namespace std;
void Union(int [],int [],int,int);
int main(){
    int ar1[100], ar2[100];
    int t1,t2;

    cout << "Enter the number of element in first set :\n";
    cin >> t1;
    cout << "Enter the element of set 1 :\n";
    for (int i = 0; i < t1; i++)
    {
        cin >> ar1[i];
    }
    
    cout << "Enter the number of element in second set :\n";
    cin >> t2;
    cout << "Enter the element of set 2 :\n";
    for (int i = 0; i < t2; i++)
    {
        cin >> ar2[i];
       
    }

    Union(ar1,ar2,t1,t2);

    return 0;
}


void Union(int ar1[],int ar2[],int t1,int t2){

    int max=0;
    int ans[100]={0};
    for (int i = 0; i < t1; i++)
    {
        ans[ar1[i]]=1;
        if(ar1[i]>max) max=ar1[i];
    }
    for (int i = 0; i < t2; i++)
    {
        ans[ar2[i]]=1;
        if(ar2[i]>max) max=ar2[i];
    }
    cout <<"Union of the A and B is: { ";
    for (int i = 0; i <=max; i++)
    {
        if(ans[i]==1)
        cout <<  (i) << " ";
    }
    cout << "}";


}
