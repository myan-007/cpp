#include<bits/stdc++.h>
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
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define all(x)			x.begin(),x.end()

#ifndef ONLINE_JUDGE 
#define debug(x) 		cerr << #x << " ";_print(x); cerr << "\n";
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
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
	freopen("../error.txt","w",stderr);
#endif
}
int select(vi&,int,int,int);
int Choose_pivot(vi&,int,int);
int partition(vi&,int ,int ,int); 

int select(vi& arr,int p,int r,int k){

	cerr << "select\n";
	debug(arr);
	debug(p);
	debug(r);
	debug(k);
	if(p==r) return arr[p-1];
	else{
		int x=Choose_pivot(arr,p,r);
		int q=partition(arr,p,r,x); //returns index
		int x_rnk=q-p;
		debug(x);
		debug(q);
		debug(x_rnk);
		if(k==x_rnk) return x;
		else if(k<x_rnk){
			return select(arr,p,q-1,k);
		}
		else{
			return select(arr,q+1,r,k-x_rnk);
		}
	}


}

int Choose_pivot(vi& arr,int p,int r){

	cerr << "Choose_pivot\n";
	debug(arr);
	debug(p);
	debug(r);
	if(p==r) return arr[p];
	int n=r-p;
	int c=p;
	vector<vector<int>> vii;
	for (int i = 0; i < ceil(n/5.0); ++i)
	{
		vector<int> tmp;

		for (int i = 0; i < 5; ++i)
		{
			if(c>=r) break;
			tmp.eb(arr[c++]);
		}

		debug(tmp);
		sort(all(tmp));
		
		vii.eb(tmp);
	}

	vector<int> mds;
	for (int i = 0; i < ceil(n/5.0); ++i)
	{
		mds.eb(vii[i][vii[i].size()/2]);
	}
	debug(mds);
	sort(all(mds));
	return mds[mds.size()/2];
}

int partition(vi& arr,int p,int r,int x){

	debug(x);
	int in=0;
	for (int i = p; i < r; ++i)
	{
		if(arr[i]==x){
			in = i;break;
		}

	}

	swap(arr[p],arr[in]);
	debug(arr);
	int i=p,j=r;
	while(i<j){
		do{
			i++;
		}while(i<r && arr[i]<=x);
		if(i>j) break;
		do{
			j--;
		}while(arr[j]>x);
		if(i<j){
			swap(arr[i],arr[j]);
		}
	debug(arr);

	}
	swap(arr[p],arr[j]);
	cerr << "partition\n";
	debug(arr);
	return j+1;



}

void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}



int32_t main()
{
	c_p_c();
	int n;
	cin >> n;
	debug(n);
	vi arr;
	for (int i = 0; i < n; ++i)
	{ 
		int x;
		cin >> x;
		arr.eb(x);
	}
	
	debug(arr);

	// cout << floor((n+1)/2.0)<<"\n";
	cout << select(arr,0,n,floor((n+1)/2.0));


	return 0;
}