#include<iostream>
#include <array>
using namespace std;


void difference(int [],int  [] ,int ,int);



int32_t main()
{
	
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
	cout << "input 1 to preform A-B\n";
	cout << "input 2 to preform B-A\n";
	int op;
	cin >>op;


	//calling
	if(op==1){
			cout << "A-B ";
			difference(a,b,na,nb);
	}
	else{
		cout << "B-A ";
			difference(b,a,nb,na);
			
	}


	return 0;
}



void difference(int a[],int b[],int na,int nb){

	int k=0;
	int ans[100]={0};
	for (int i = 0; i < na; ++i)
	{
		bool flag =false;           //setting flag false
		for (int j = 0; j < nb; ++j)
		{
			if(a[i]==b[j]){    //checking for availablity of element in set a
				flag=true;
				break;
			}
		}
		if(flag==false){
			
			ans[k++]=a[i];
		}
	}

	cout << "= {";
	for (int i = 0; i < k-1; ++i)
	{
		cout << ans[i] << ",";
	}
	if(k!=0)cout  <<  ans[k-1] << "}";
	else cout << "}";
}