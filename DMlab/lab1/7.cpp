#include<bits/stdc++.h>
using namespace std;


void input(set<int> &vec,int n){
	cout << "Enter elements :\n";
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		vec.insert(x);
	}
}

void print(set<int> s){

	for(auto i:s){
		cout << i << " "; 
	}
	cout << "]\n";
}

set<int> Union(set<int> a,set<int> b){
	set<int> uni;
	for(auto i:a){
		uni.insert(i);
	}
	for(auto i:b){
		uni.insert(i);
	}
	return uni;
}

set<int> Intersection(set<int> a,set<int> b){
	set<int> in;
	
	for(auto i:a){
		for(auto j:b){
			if(i==j){
			in.insert(i);
		}
		}
	}
	return in;
}

set<int> comp(set<int> a,set<int> u){
	set<int> cmp;
	for(auto i:u){
		if(a.count(i)==0){
			cmp.insert(i);
		}
	}
	return cmp;
}


int32_t main()
{
	// c_p_c();
	cout << "Enter the total number of element in universal set\n";
	int n;
	cin >> n;
	set<int> u;
	input(u,n);
	cout << "UNIVERSAL SET :[";print(u);
	set<int> a;
	set<int> b;
	cout << "Enter the total number of element in set A\n";
	int x;
	cin >> x;
	input(a,x);
	cout << "Enter the total number of element in set B\n";
	cin >> x;
	input(b,x);

	set<int> un= Union(a,b);
	set<int> in = Intersection(a,b);
	set<int> ac=comp(a,u);
	set<int> bc=comp(b,u);
	

	cout << "AUB :[";print(un); 
	cout << "A^B :[";print(in); 
	cout << "A' :[";print(comp(a,u)); 
	cout << "B' :[";print(comp(b,u)); 
	cout << "\n+++++First property (A^B)’ = (A’ U B’)+++++\n";
	cout << "LHS\t(A^B)' :[";print(comp(in,u));
	cout << "RHS\tA' U B' :[";print(Union(ac,bc));
	cout << "\n+++++Second property (AUB)’ = A’ ^ B’+++++\n";
	cout << "LHS\t(AUB)' :[";print(comp(un,u)); 
	cout << "RHS\tA' ^ B' :[";print(Intersection(ac,bc)); 




	return 0;
}