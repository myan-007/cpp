#include <iostream>
using namespace std;

void symdifference(int a[],int b[],int na,int nb){
	int k=0;
	int ans[100];
	for (int i = 0; i < na; i++)   //saving unique element of A
	{
		bool flag=false;
		for (int j = 0; j < nb; j++)
		{
			if(b[j]==a[i]) {
				flag=true;
				break;
				} 
		}
		if(flag==false) ans[k++]=a[i];
	}

	for (int i = 0; i < nb; i++)   //saving  unique elements of B
	{ 
		bool flag=false;
		for (int j = 0; j < na; j++)
		{
			if(a[j]==b[i]) {
				flag=true;
				break;
				}
		}
		if(flag==false) ans[k++]=b[i];
	}
	
	cout << "SYMMETRIC DIFFERENCE  {";   //PRINTING ANSWER
	for(int i=0;i<k;i++){
		cout << ans[i] <<" ";
	}
	cout << "}";
	



}

int main(){

	//declaration
	int a[100], b[100];
	int na,nb;
	

	//input
	cout << "Enter the number of element in set A :\n";
	cin >> na;
	cout << "Enter the element of set A without duplication :\n";
	for (int i = 0; i < na; i++)
	{
		cin >> a[i];
	}

	cout << "Enter the number of element in set B :\n";
	cin >> nb;
	cout << "Enter the element of set B without duplication :\n";
	for (int i = 0; i < nb; i++)
	{
		cin >> b[i];
	}
	
	//calling
	symdifference(a,b,na,nb);
	
	
	return 0;
}
