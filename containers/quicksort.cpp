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

#define ll long long
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

int partition(int ar[],int l,int h){

	int x=ar[l];

	int i,j;
	j=h;i=l;
	while(i<j){
		do{
			i++;
		}
		while(ar[i]<=x);
		if(i>j) break;
		do{
			j--;
		}
		while(ar[j]>x);

		if(i<j){
			swap(ar[i],ar[j]);
		}
		// cout << i<< " "<< j << "\n"; 
	}
	swap(ar[l],ar[j]);
	// cout << "partition ";
	// printarray(ar,6)
	return j;

}
// int partition (int arr[], int low, int high) 
// { 
//     int pivot = arr[high]; // pivot 
//     int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
  
//     for (int j = low; j <= high - 1; j++) 
//     { 
//         // If current element is smaller than the pivot 
//         if (arr[j] < pivot) 
//         { 
//             i++; // increment index of smaller element 
//             swap(arr[i], arr[j]); 
//             cout << "swap ";
// 			printarray(arr,6)

//         } 
//     } 
//     swap(arr[i + 1], arr[high]); 
//     return (i + 1); 
// }



void quicksort(int ar[],int l,int h){
	// cout << "hey ";
	// cout << "l h "<< l << " " << h << " quicksort ";
	// printarray(ar,6)
	if(l<h){

		int j=partition(ar,l,h);
		// cout << j << "\n";
		quicksort(ar,j+1,h);
		quicksort(ar,l,j-1); 
	}

}
int32_t main()
{
	c_p_c();
	int n;
	cin >> n;
	int ar[n+1];
	ar[n]=INT_MAX;
	inputarray(ar,n)
	quicksort(ar,0,n);
	printarray(ar,n)

	return 0;
}