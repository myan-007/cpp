#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             ll
#define ll   			long long
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
#define mod             998244353
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define f(i,x,n)			for(int i=x;i<n;i++)
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
	freopen("./input.txt", "r", stdin);
	freopen("./output.txt", "w", stdout);
	freopen("./error.txt","w",stderr);
#endif
}


// M M-2 return 0;

// case 1: ...M....M......   ans = n!

// case 2: ....M-1....M-1...M....
// M->1
// M-1->k

// n! - C(n,k+1)*1*k!*(n-k+1)! 




int32_t main()
{
	c_p_c();


	vi prime = sieve(100);
	debug(prime);
	// int fac[2*(10e5)];
	// fac[0]=1;
	// for (int i = 0; i <2*(10e5) ; ++i)
	// {
	// 	fac[i]=(fac[i-1]*i)%mod;
	// }

	// w(x){
	// 	int n;
	// 	cin >>n ;
	// 	vi vec;
	// 	for (int i = 0; i < n; ++i)
	// 	{
	// 		int x;
	// 		cin >> x;
	// 		vec.eb(x);
	// 	}

	// 	sort(vec.begin(),vec.end());
	// 	if(vec[n-1]==vec[n-2]){
	// 		cout << fac[n]; 
	// 	}
	// 	else if(vec[n-1]-vec[n-2]>1){
	// 		cout << "0\n";
	// 	}
	// 	else{

	// 	}


	// }




	return 0;
}