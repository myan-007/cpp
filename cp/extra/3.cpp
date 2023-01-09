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
	
	w(x){
		int n;
		cin >> n;
		int ar[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> ar[i];
		}
		if(ar[0]==1){
			cout << (n+1) << " ";
			for (int i = 1; i <=n; ++i)
			{
				cout << i << " "; 
			}
			cout << "\n";
		}
		else if(ar[n-1]==0){
			for (int i = 1; i < n+2; ++i)
			{
				cout << i << " "; 
			}
			cout << "\n";
		}
		else{
			int i=1;
			while(true){
				cout << i << " ";
				if( ar[i]==1 && ar[i-1]==0){  //i<=(n-1) &&
					cout << n+1 << " ";
					for (int j = i+1; j <= n ; ++j)
					 {
					 	cout << j << " ";
					 } 
					 cout << "\n";
					 break;
				}
				i++;
			}
		}


	}

	return 0;
}