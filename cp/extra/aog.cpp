#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)



void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("../input.txt", "r", stdin);
		freopen("../output.txt", "w", stdout);
	#endif
}

int32_t main()
{
	c_p_c();

	int x;
	cin >> x;
	int ar[x];
	cin >> ar[0];
	int min=ar[0],max=ar[0];
	int m=0,n=0;
	for (int i = 1; i < x; ++i)
	{
		cin >> ar[i];
		if(ar[i]>max){
			max=ar[i];
			m=i;
		}
		if(ar[i]<min && i>n){
			min=ar[i];
			n=i;
		}
		if(ar[i]==max && i<m){
			m=i;
		}
		if (ar[i]==min && i>n)
		{
			n=i;
		}
        // cout << max << " "<< min<<" " <<"\n";
	}
        // cout << m << " " << n << " " ;
		if(m>=n)
		cout << (m-0)+(x-n-1)-1;
		else
		cout << (m-0)+(x-n-1);
	


	return 0;
}
