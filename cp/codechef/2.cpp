#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
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

void _print(int i){cerr << i; }
void _print(float i){cerr << i; }
void _print(double i){cerr << i; }
void _print(string i){cerr << i; }
void _print(char i){cerr << i; }

template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);


template<class T> void _print(vector<T> v){cerr << '[';for(T i:v){ _print(i);cerr << " ";}cerr << "]";}
template<class T> void _print(set<T> v){cerr << '[';for(T i:v){ _print(i);cerr << " ";}cerr << "]";}

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

	
	w(a){
		int n,x;
		cin >> n >>x;
		map<int,int> map1;  
		map<int,int> map2;  
 		vi vec;
 		for (int i = 0; i < n; ++i)
 		{
 			int a;
 			cin >> a;
 			vec.eb(a);
 		}

 		for (int i = 0; i < n; ++i)
 		{
 			if(map1.find(vec[i])!=map1.end()) map1[vec[i]]++;
 			else map1[vec[i]]=1;
 		}
 		int ans=0;int e, c=INT_MAX;

 		if(x==0){
 			for (int i = 0; i < n; ++i)
 			{
 				if(map1[vec[i]]>ans)
 					ans=map1[vec[i]];
 			}
 			cout << ans << " 0\n";
 		}
else{
 		for (int i = 0; i < n; ++i)
 		{
 			debug(vec[i]^x);
 			if(map2.find(vec[i]^x)!=map2.end()) map2[vec[i]^x]++;
 			else map2[vec[i]^x]=1;
 		}
 	// 	for(auto it : map2){  //pair
 	// 		cout<< "m " << it.first << " " << it.second << endl;
		// }
		for (int i = 0; i < n; ++i)
		{
			if((map1[vec[i]]+map2[vec[i]])>ans){
				ans=(map1[vec[i]]+map2[vec[i]]);
				c=map2[vec[i]];
				e=vec[i];
			}
			else if((map1[vec[i]]+map2[vec[i]])==ans && map2[vec[i]]<c){
				c=map2[vec[i]];
			}
		}

		cout << ans<<" "<< c<<"\n";}
	}


	return 0;
}