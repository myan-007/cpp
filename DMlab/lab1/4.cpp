//compliment program exp 3
#include <iostream>
using namespace std;
void compliment(int[], int[], int, int);
int main()
{

	int u[100], a[100];

	int nu;
	cout << "Enter the number of element in universal set :\n";
	cin >> nu;
	cout << "Enter the element of universal set without duplication :\n";
	for (int i = 0; i < nu; i++)
	{
		cin >> u[i];
	}
	int na;
	cout << "Enter the number of element in set A :\n";
	cin >> na;
	if (nu < na)
	{
		cout << "Not possible";
		return 0;
	}
	cout << "Enter the element of set A without duplication :\n";
	for (int i = 0; i < na; i++)
	{
		cin >> a[i];
	}
	compliment(a, u, na, nu);

	return 0;
}
void compliment(int a[], int u[], int na, int nu)
{
	if (nu == na)
	{
		cout << "NULL SET - {}";
	}
	else
	{

		int flag[100] = {0};
		for (int i = 0; i < nu; ++i)
		{
			flag[u[i]] = -1;
		}
		for (int i = 0; i < na; ++i)
		{
			flag[a[i]] = 1;
		}
		cout << "UNION SET : {";
		for (int i = 0; i < nu; ++i)
		{
			if (flag[u[i]] == -1)
			{
				cout << u[i] << ",";
			}
		}
		cout << "}";
	}
}
