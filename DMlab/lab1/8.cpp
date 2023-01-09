#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter the number of element :";
	cin >> n;
	char set[n];
	cout << "Enter elements:\n";
	for (int i = 0; i < n; ++i)
	{
		cin >> set[i];
	}
	cout << "{{}";
	for (int i = 0; i < pow(2,n); ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i & (1 << j)){
				cout << set[j];
			}
		}
		if(i!=pow(2,n)-1)
		cout << ",";
	}
	cout << "}";
	return 0;
}