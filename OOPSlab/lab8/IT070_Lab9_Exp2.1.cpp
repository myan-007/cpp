#include <iostream>
#include <string.h>
using namespace std;

void sort(char **str,int n)
{
    char *temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(*(str + i), *(str + j)) > 0)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number you want to sort string : ";
    cin >> n;
    char *arrStr[n];
    for (int i = 0; i < n; i++)
    {
        int sizeOfString;
        cout << "Enter the size of string (" << i + 1 << ") : ";
        cin >> sizeOfString;

        char *str = new char[sizeOfString + 1];
        for (int j = 0; j < sizeOfString; ++j)
        {
            cin >> *(str + j);
        }
        *(str + sizeOfString) = '\0';
        arrStr[i] = str;
    }

    sort(arrStr,n);

    cout << "Sorted string is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arrStr[i] << " ";
    }
    return 0;
}