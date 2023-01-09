#include <iostream>
using namespace std;

void copystring(char *originlstr, char *copystr)
{
    while (*originlstr != '\0')
    {
        *copystr = *originlstr;
        originlstr++;
        copystr++;
    }
    *copystr = '\0';
}

int main()
{
    char strOrig[100], strCopy[100];
    char *origPtr, *copPtr;

    cout << "Enter the string: ";
    gets(strOrig);

    origPtr = &strOrig[0];
    copPtr = &strCopy[0];

    copystring(origPtr, copPtr);

    cout << "\nEntered String: " << strOrig;
    cout << "\nCopied String: " << strCopy << endl;
    return 0;
}