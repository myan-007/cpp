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
#define all(x)			x.begin(),x.end()
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
void rotate(vector<int>& vec,int l,int m){
	vi pp(abs(l-m)+1);
	pp[0]=vec[m];
	int j=1;
	f(i,l,m){
		pp[j++]=vec[i];
	}
	debug(pp);
	j=l;
	for (int i = 0; i < pp.size(); ++i)
	{
		vec[j]=pp[i];
		j++;
	}
	debug(vec);
}
int32_t main()
{
	c_p_c();
	w(x){
		int n;
		cin >> n;
		vi v(n);
		f(i,0,n) cin >> v[i];

		vi sorted(n);
		sorted = v;
		sort(all(sorted));
		vector<vector<int>> ans;
		debug(sorted);
		for (int i = 0; i < n; ++i)
		{
			if(sorted[i]==v[i]) continue;
			else {
				vi temp(3);
				int k=i+1;
				while(true){
					if(v[k]==sorted[i]) {
						break;
					}
					k++;
				}
				rotate(v,i,k);
				temp[0]=i+1;
				temp[1]=k+1;
				temp[2]=abs(i-k);
				debug(temp);
				ans.eb(temp);
			}
		}

		cout << ans.size() << "\n";
		for (int i = 0; i < ans.size(); ++i)
		{
			cout << ans[i][0] <<" "<< ans[i][1] <<" "<< ans[i][2] <<"\n";
		}
		
	}



	return 0;
}