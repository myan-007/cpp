#include <iostream>
#include <array>
using namespace std;
void intersection(int[], int[], int, int);
int main()
{
    int ar1[100], ar2[100];
    int t1;
    cout << "Enter the number of element in first set :\n";
    cin >> t1;
    cout << "Enter the element of set 1 :\n";
    for (int i = 0; i < t1; i++)
    {
        cin >> ar1[i];
    }
    int t2;
    cout << "Enter the number of element in second set :\n";
    cin >> t2;
    cout << "Enter the element of set 2 :\n";
    for (int i = 0; i < t2; i++)
    {
        cin >> ar2[i];
    }
    intersection(ar1, ar2, t1, t2);

    return 0;
}
void intersection(int ar1[], int ar2[], int t1, int t2)
{

    int ans[100];
    int a = 0;
    int flag[100] = {0};
    for (int i = 0; i < t1; i++)
    {
        for (int j = 0; j < t2; j++)
        {
            if (ar1[i] == ar2[j] && flag[ar1[i]] == 0)
            {
                ans[a++] = ar1[i];
                flag[ar1[i]] = 1;
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
}
