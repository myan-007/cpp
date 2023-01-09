#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define ll 				long long
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
#define sz(x) 			((int)(x).size())
#define all(x)			x.begin(),x.end()
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)

#ifndef ONLINE_JUDGE 
#define debug(x) cerr << #x << " "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

template<class T> void _print(vector <T> v);
template<class T> void _print(set <T> v);
template<class T> void _print(T i){cerr << i; }
template<class T> void _print(vector<T> v){cerr << '[';for(T i:v){ _print(i);cerr << " ";}cerr << "]";}
template<class T> void _print(set<T> v){cerr << '[';for(T i:v){ _print(i);cerr << " ";}cerr << "]";}

vi sieve(int n){vi ans;vb isprime(n+1,true);f(i,2,n+1)if(isprime[i]){ans.eb(i);for(int j=i*i;j<=n;j+=i)isprime[j]=false;}return ans;}
int gcd (int a, int b) {int temp;while (b != 0) {temp = a % b;a = b;b = temp;}return(a);}

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
		int n,h;
		cin >> n >> h;
		vi arr(n);
		f(i,0,n){
			cin >> arr[i];
		}
		sort(all(arr));
		debug(h);
		debug(arr[n-1]);
		debug(arr[n-2]);
		int sum = arr[n-1]+arr[n-2];
		if(h%sum==0){
			cout << (h/sum)*2 << "\n";
		}
		else if(h%sum<=arr[n-1]){
			cout << (h/sum)*2 + 1<< "\n";
		}
		else{
			cout << (h/sum)*2 + 2 << "\n";
		}

	}

	return 0;
}