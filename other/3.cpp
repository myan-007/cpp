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

#define UB 2e18

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
		string t;
		cin >> t;
		char o[27];
		int in=0;
		char la=t[t.length()-1];
		o[in++]=la;
		cout << o << "\n";
		for(int i=t.length()-2;i>=0;i--){
			if(t[i]!=la){
				la=t[i];
				o[in++]=la;
			}
		}
		cout << o;

	}
	return 0;
}