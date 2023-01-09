	// given n element number of unique elements present
	arr[] ={1,2,2,3,4,4};

	//ORDERED SET

	// declaration
	set<int> st;
	set<int> st ={1,2,2,3,4,4};

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		st.insert(x); //log(n) time n is size of n
		st.emplace(x);
		// stores in the ascending form 
	}
	st.count(); //returns number of repetitation of number
	//USE IT WHEN WE HAVE CHECK FOR A NUMBER IN ARRAY
	//can't do these with set st[0]

	// st={1,2,3,4};
	//Erase function
	//log n
	st.erase(st.begin());  //st.erase(iterator) st={2,3,4}

	st.erase(st.begin(),st.begin()+2); //[) st={4}

	st.erase(key); //key=4;

	st.find(key); //returns iterator pointing to key

	set<int> st={1,5,7,8};

	auto it = st.find(7);
	auto it= st.find(3); //returns a end iterator 

	set<struct> st;
	//set of anything can be define just it must be unique
	st.insert(3);
	st.insert(3);
	// st={3}
	for (auto it =st.begin(); it !=st.end(); ++it)
	{
		cout << *it << " ";
	}



	//UNORDERED SET
	unordered_set<int> st;
	//average time complexity is O(1) constant
	//worst case is O(set size) linear


	//	MULTI SET

	multiset<int> ms;
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);
	ms.insert(3);
	ms.insert(1);
	// ms={1,1,2,3}

	ms.erase(2); //erase all the 2

	auto it = ms.find(2);//first ocurrence of 2

	ms.count(2); // returns number of instances of 2


