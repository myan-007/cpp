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

template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);

template<class T> void _print(T i){cerr << i; }
template<class T> void _print(vector<T> v){cerr << '[';for(T i:v){ _print(i);cerr << " ";}cerr << "]";}
template<class T> void _print(set<T> v){cerr << '[';for(T i:v){ _print(i);cerr << " ";}cerr << "]";}

vi sieve(int n){vi ans;vb isprime(n+1,true);f(i,2,n+1)if(isprime[i]){ans.eb(i);for(int j=i*i;j<=n;j+=i)isprime[j]=false;}return ans;}


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
		int k;
		cin >> n >> k;
		vi arr;
		int c=0;
		int sum=0;
		vi flag(n,0);
		map<int,int> map;
		for (int i = 0; i < n; ++i)
		{
			int l;
			cin >> l;
			arr.eb(l);
			if(arr[i]>0)
			{
				c++;
				flag[i]=-1;
			}
			sum+=l;
		}

		if (k==0 )
		{
			cout << sum << "\n";
		}
		else if( c==0){
			cout << 0 << "\n";

		}
		else if(n==c){
			cout << sum+(k*2*n) << "\n";
		}
		else{
			
			
			if(flag[n-1]==-1 || flag[1]==-1){
				flag[0]=1;
					map[1]++;
			}
			if(flag[n-2]==-1 || flag[0]==-1){
				flag[n-1]=1;
					map[1]++;
			}
			for (int i = 1; i<n-1; ++i)
			{
				if(arr[i-1]!=0 || arr[i+1]!=0){
					flag[i]=1;
					map[1]++;
				}
			}
			if(flag[n-1]>0){
				flag[0]=flag[n-1]+1;
			}
			debug(flag);


			int p=0;
			for (int i = 1; i < n; ++i)
			{
				if(flag[i]==0 && flag[i-1]>0){
					flag[i]=flag[i-1]+1;
				}
			debug(flag);

			}
			for (int i = n-1; i >=0; --i)
			{
				if(flag[i]==0 && flag[i+1]>0){
					flag[i]=flag[i+1]+1;
				}
			debug(flag);
			}

			if(flag[n-1]>0 && flag[0]>0 && flag[n-1]-flag[0]>1){
					flag[n-1]=flag[0]+1;
			}
			for (int i = n-1; i>=1; --i)
			{
				if(flag[i]>0 && flag[i+1]>0 && flag[i]-flag[i+1]>1){
					flag[i]=flag[i+1]+1;
				}
			}
			for (int i = 0; i < n; ++i)
			{
				if(flag[i]>1){
					map[flag[i]]++;\
				}
			}
			debug(map[1]);
			debug(map[2]);
			debug(map[3]);

			int ks=c;
			int ans=sum;
			int s=0;
			for (int i = 0; i < k; ++i)
			{
				ks+=map[i];
				ans+=ks*2;
			}
			cout << ans << "\n";

		}



	}

	return 0;
}