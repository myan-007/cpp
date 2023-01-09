#include<bits/stdc++.h>

using namespace std;


int main(){

#ifndef ONLINE_JUDGE
	freopen("../input.txt","r",stdin);
	freopen("../output.txt","w",stdout);
#endif
	int a,sum=0;
	while(cin >> a)
		sum+=a;

	cout << sum;
	return 0;
}


