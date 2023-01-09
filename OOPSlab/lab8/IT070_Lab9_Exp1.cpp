#include <iostream>
using namespace std;

void sort(int n, int *p)
{
    int i, j, t;

    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {

            if (*(p + j) < *(p + i))
            {

                t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }
        }
    }

    cout<<"Sorted List :"<<endl;

    for (i = 0; i < n; i++)
    {
        cout << *(p + i) << " ";
    }
}

void minimum(int n, int *p)
{
    int min = *(p++), t;
    for (int j = 1; j < n; j++)
    {
        if (min >= *p)
        {
            t = *p;
            *p = min;
            min = t;
        }
        p++;
    }
    cout << "Minimun element is : " << min << endl;
}



int main()
{
    int n;
    cout << "Enter the number you want to sort : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array element : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    minimum(n,arr);
    sort(n, arr);

    return 0;
}