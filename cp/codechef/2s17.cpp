#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define eb              emplace_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define vb              vector<bool>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define f(i,x,n)		for(int i=x;i<n;i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)

#ifndef ONLINE_JUDGE 
#define debug(x) 		cerr << #x << " "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif




void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
	freopen("../error.txt","w",stderr);
#endif
}

int32_t main()
{
	c_p_c();
	

	w(x){
		int n;
		cin >> n;
		if(n%2==0){
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cout << -1 << " "; 
				}
				cout << "\n";
			}
		
		}
		else {
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					if(i==j) 
					cout << 1 << " ";
					else
					cout << -1 << " ";
				}
				cout << "\n";
			}
		}
	}

	return 0;
}