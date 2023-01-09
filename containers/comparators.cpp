//COMPARATOR


bool comp(int el1,int el2){
	if(el1 <= el2) return true;
	return false;
}




sort(arr,arr+n); //sorts in ascending order
sort(arr,arr+n,comp);


//sort the array of the pairs according to the first element of the pair 
//if they are same then sort by second element deascending order

bool comp(pair<int,int> el1,pair<int,int> el2){
	if(el1.first < el2.first) return true;
	if(el1.first==el2.first){
		if(el1.second > el2.second)
			return true;
	}
	return false;
}

pair<int,int> arr[] ={{1,4},{5,2},{5,9}};
sort(arr,arr+3,comp);




//descending order
//use comparator of your choice
// use greater<int> only works for deacensing order
// nlogn 

sort(arr,arr+n,greater<int>);



































