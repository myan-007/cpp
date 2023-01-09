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
#define printarray(a,size) \
       { \
           for (int i = 0; i < size; i++) \
           { \
                cout << a[i] << " ";\
            } \
            cout << "\n"; \
        } \


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


void merge(int a[],int p,int q,int r){
	// int n=q-p+1;
	// int m=r-q;
	// int x[n];
	// int y[m];
	// for (int i = 0; i < n ; i++)
	// {
	// 	x[i]=a[i+p];
	// }
	// for (int i = 0; i < m ; i++)
	// {
	// 	y[i]=a[i+q+1];
	// }
	int i=p;
	int j=q+1;
	int k=p;
	int b[r+1];
	while (i<=q && j<=r)
	{
		if(a[i] <= a[j]) b[k++]=a[i++];
		else b[k++]=a[j++];
		
	}
	while (i<=q)
	{
		b[k++]=a[i++];
	}
	while (j<=r)
	{
		b[k++]=a[j++];
	}
	for (int i = p; i <=r; ++i)
	{
		a[i]=b[i];
	}
	
	
}

void mergesort(int a[],int p,int r){
	
	if(p<r){
		int mid=(p+r)/2;
		mergesort(a,p,mid);
		mergesort(a,mid+1,r);
		merge(a,p,mid,r);
	}
	return;



}


int32_t main()
{
	c_p_c();
	

	int n;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}


	mergesort(a,0,7);
	printarray(a,8);




	return 0;
}
