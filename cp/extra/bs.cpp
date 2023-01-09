#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define ll              long long
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



void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}
int ar[8]={1,2,3,4,6,34,45,48};

int binarysearch(int l,int h,int key){

	if(l==h){
		if(ar[l]==key)
		return l;
		else{
			return -1;
		}
	}
	else{
		int mid=(l+h)/2;
		if(ar[mid]==key){
			return mid;
		}
		else if(ar[mid]>key){
			return binarysearch(l,mid-1,key);
		}
		else
			return binarysearch(mid+1,h,key);
	}

	binarysearch(l,h,key);

}






int32_t main()
{
	c_p_c();
	std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
	start = std::chrono::high_resolution_clock::now();
	int key=34;
		int l=0;
		int e=7;
		cout << binarysearch(l,e,key);




	end = std::chrono::high_resolution_clock::now();
	ll elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
	cout << "\nElapsed Time: " << elapsed_time << "ms\n";
		

	return 0;
}