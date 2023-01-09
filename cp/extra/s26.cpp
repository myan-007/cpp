#include <bits/stdc++.h>
using namespace std;
set<int> a;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int> >
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
	int x;    \
	cin >> x; \
	while (x--)
#define printarray(a, size)            \
	{                                  \
		for (int i = 0; i < size; i++) \
		{                              \
			cout << a[i] << " ";       \
		}                              \
		cout << "\n";                  \
	}

bool checkprime(vector<int> arr, int n)
{

	if (n == 1 && arr[0] <= 3)
	{
		return true;
	}
	int i = n - 1;
	int sum1 = 0;
	for (int i = 0; i < n; ++i)
	{
		sum1 += arr[i];
	}

	while (arr[i] == 9)
	{
		arr[i--] = 0;
	}
	arr[i] += 1;
	// printarray(arr,n)
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}

	if (sum % 3 == 0)
	{
		return true;
	}
	sum = sum1;
	sum -= 1;

	if (sum % 3 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void answer(string s, int n)
{

	for (int i = 0; i < n; ++i)
	{
		int x = s[i] - '0';
		if(x==1){
			cout << 1 << "\n";
			cout << 1 << "\n";
			return;
		}
		if (a.count(x) == 0)
		{
			cout << 1 << "\n";
			cout << x << "\n";
			return;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		
		for (int j = i+1; j < n; ++j)
		{
			int x = s[i] - '0';
			x *= 10;
			x += (s[j] - '0');
			// cout << x << "\n";
			if (a.count(x) == 0)
			{
				cout << 2 << "\n";
				cout << x << "\n";
				return;
			}
		}
	}
	return;
}

void c_p_c()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

int32_t main()
{
	c_p_c();
	int ar[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

	for (int i = 0; i < (sizeof(ar) / sizeof(ar[0])); i++)
	{
		a.insert(ar[i]);
	}

	w(x)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;

		answer(s, n);
	}

	return 0;
}
