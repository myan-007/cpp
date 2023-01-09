#include <iostream>
#include <array>
using namespace std;
int main()
{
    int ar1[100], ar2[100];
    int x[100]={0},y[100]={0};
    int t1;
    cout << "Enter the number of element in first set :\n";
    cin >> t1;
    cout << "Enter the element of set 1 :\n";
    for (int i = 0; i < t1; i++)
    {
        cin >> ar1[i];
         x[ar1[i]]++;
    }
    int t2;
    cout << "Enter the number of element in second set :\n";
    cin >> t2;
    cout << "Enter the element of set 2 :\n";
    for (int i = 0; i < t2; i++)
    {
        cin >> ar2[i];
         y[ar2[i]]++;
    }
    int ans[100],a=0;
    for (int i = 0; i < 100; i++)
    {
        if(x[i]>1 && x[i]==y[i] ){
            int r=x[i];
            while(r--){
                ans[a++]=i;
            }
        }
    }
    
    if (a == 0)
    {
        cout << "Disjoint set";
    }
    else
    {
        
        cout << "And the intersection is : { " << ans[0];

        for (int i = 1; i < a; i++)
        {
            cout << ", " << ans[i];
        }
        cout << "}";
    }

    return 0;
}
