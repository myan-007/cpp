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


#define inputarray(a,size) \
       { \
           for (int i = 0; i < size; i++) \
           { \
                cin >> a[i];\
            } \
        } \


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
		int x;
		cin >> x;
		while(x--){
			
		int n,k;
		cin >> n>> k;
		vector<int> vec;
		int count=0;
		for (int i = 0; i < n; ++i)
		{
			
			int x1;
			cin >> x1;
			if(x1<0) count++;
			vec.emplace_back(x1);
		}
		// printarray(vec,n)
		sort(vec.begin(),vec.end());
		// printarray(vec,n)
		// cout << count <<"\n";

		if(count==n){
	
			cout << 0<<"\n";  
		}
		else {

				if(count>k){
					int i=0;
					while(k--){
						vec[i]=(-1)*vec[i];
						i++;
					}
				}
				else{
					for (int i = 0; i < n; ++i)
					{
						if(vec[i]>=0){ break;}	
						vec[i]=(-1)*vec[i];
					}
				}
				sort(vec.begin(),vec.end());
				int sum=0;
				for (int i = 0; i < n; ++i)
				{
					if(vec[i]>0) sum+=vec[i];
				}
				
				cout << sum << "\n";
		// printarray(vec,n)
				
				
			}

		
	}

	return 0;
}