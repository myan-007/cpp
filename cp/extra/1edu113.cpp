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
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)

#ifndef ONLINE_JUDGE 
#define debug(x) 		cerr << #x << " "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);

template<class T> void _print(T i){cerr << i; }
template<class T> void _print(vector<T> v){cerr << '[';for(T i:v){ _print(i);cerr << " ";}cerr << "]";}
template<class T> void _print(set<T> v){cerr << '[';for(T i:v){ _print(i);cerr << " ";}cerr << "]";}

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("./input.txt", "r", stdin);
	freopen("./output.txt", "w", stdout);
	freopen("./error.txt","w",stderr);
#endif


}

int32_t main()
{
	c_p_c();
	w(x){
		int n;
		cin >> n;
		char s[n];
		cin >> s;
		char ar[n][n];
		memset(ar, '=', sizeof ar); 
		int c2=0;
		for (int i = 0; i < n; ++i)
		{
			ar[i][i]='X';
			if(s[i]=='2'){
				c2++;
			}
		}
		
		if(c2>0 && c2<3){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";

			vector<int> a;
			for (int i = 0; i < n; ++i)
			{
				if(s[i]=='2'){
					a.eb(i);
				}
			}
			
			for (int i = 0; i < a.size(); ++i)
			{
				ar[a[i]][a[(i+1)%a.size()]]='+';		
				ar[a[(i+1)%a.size()]][a[i]]='-';		
			}
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cout << ar[i][j];
				}
				cout << "\n";
			}

		}
	}

	return 0;
}