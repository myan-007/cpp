//Algorithms
//SORTING

int arr[n];
sort(arr,arr+n);//sorts whole array in nlogn



vector<int> vec(5,0);
sort(vec.begin(),vec.end());

//vec -> 1,6,2,7,4
//sort 1 to 3
// 1 2 6 7 4

sort(vec.begin()+1,vec.begin()+4);

//if reversing the array
//reverse(start,end)
reverse(arr,arr+n);
reverse(arr.begin(),vec.end());
reverse(arr.begin()+1,vec.begin()+4); // 1 7 6 2 4

//maximum element in i to j
int max=INT_MIN;
for (int k = i; k < j; ++k)
{
	if(ar[k]>max) max=ar[k];
}


int el = *max_element(arr,arr+n); // if not use * returns iterator
int el = *min_element(arr,arr+n); // if not use * returns iterator

int el = max_element(vec.begin(),cec.end()); // if not use * returns iterator
int el = min_element(vec.begin(),cec.end()); // if not use * returns iterator



//sum of element from i to j
//accumulate(start pointer,end pointer,initial element)
int sum = accumulate(arr,arr+n,0); 
int sum = accumulate(vec.begin(),vec.end(),0); 


//arr[] -> 1 6 7 1 2 1 3
// number of 1 in array

//count(start pointer,end pointer,element)
int cnt = count(arr,arr+n,1);
int cnt = count(vec.begin(),vec.end(),1);



//first occurence of element in array
auto it = find(arr,arr+n,2);// returns pointer pointing to element if found else returns end pointer

int ind = it-arr;


auto it = find(vec.begin(),vec.end(),2);


if(it==vec.end()){
	cout << "element is not present";

}
else{
	int ind = it - vec.begin();
}

//BINARY SEARCH
//log n
// only for sorted arrays
// arr[] -> 1 5 7 9 10

//binary_search(firstiterator,lastiterator, x)
// returns bool if found true else false

bool res = binary_search(arr,arr+n,8);
bool res = binary_search(vec.begin(),vec.end(),8);



// lower_bound function
// log n
// returns an iterator pointing to first which is not less than x
// arr[] 1 5 7 7 8 10 10 10 11 11 12
// x=10
// points 10 because 10 is not lesser than 10
// x=6
// points to 7
// x=13
// points to end iterator 


auto it = lower_bound(arr,arr+n,x);
ind = it -arr;

auto it = lower_bound(vec.begin(),vec.end(),x);
ind = it -vec.begin();

ind =  lower_bound(vec.begin(),vec.end(),x)- vec.begin();



//upper_bound
// log n
//returns just greater element than x
// arr[] 1 5 7 7 8 10 10 10 11 11 12
// x=7
// points to 8
// x=6
// points to 7
// x=12
// end() pointer
// x=15
// end



auto it = upper_bound(arr,arr+n,x);
ind = it -arr;

auto it = upper_bound(vec.begin(),vec.end(),x);
ind = it -vec.begin();

ind =  upper_bound(vec.begin(),vec.end(),x)- vec.begin();


// find first occurence of x

if(binary_search(arr,arr+n,x)){
	cout << lower_bound(arr,arr+n,x);
}
else{
	cout << "NOT FOUND";
}




int ind=lower_bound(arr,arr+n,x);
if(ind!=n && arr[ind]==x){
	cout <<ind;
}
else{
	cout << "NOT FOUND";
}


//Find me last occurrence of x

int ind=upper_bound(arr,arr+n,x)-arr;
	if(ind!=n && ind>=1 && arr[ind-1]==x){
		cout << ind-1;
	}
	else{
		cout << "NOT FOUND";
	}



//count of x in array
//arr[] 1 5 7 7 8 10 10 10 11 11 12
// x=6
//ub-lb
int count = upper_bound(arr,arr+n,x) - lower_bound(arr,arr+n,x);

//O(2*log n)


//Next Permutation        SPECIALLY IMPORTANT
//string s = "abc";
// all permutation are
//abc
//acb
//bac
//bca
//cab
//cba

// s="bca"
bool res = next_permutation(s.begin(),s.end());
//returns true if next permutation is available
// and string changes to s=cab

//if s = cba
// O(n)
bool res = next_permutation(s.begin(),s.end());
// res= false
// s=cba

// s="bca"
// print all the permutation

//answer
//sort it first
//then do next permutation n! times
//so O(n!)

string s ="bca";
sort(s.begin(),s.end());
do{
	cout << s << endl;

}while(next_permutation(s.begin(),s.end()));



//previous_permutation
bool res = previous_permutation(s.begin(),s.end());




