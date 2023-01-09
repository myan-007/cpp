//MAP 
//log n time complexity
map<string, int> map;
map["meet"]=12;
map["jay"]=2;
map["ram"]=34;
map["rahul"]=45;
map["meet"]=23;
// it will store 23 as it overwrite 12

//maintains a linearly increasing order
//key are string here
//only stores unique keys


map.emplace("meet",23);
map.erase(key);// remove meet 
map.erase(iterator);


auto it = map.find("key");

map.empty(); //returns a boolean to check whether map is empty or not


//print

for(auto it : map){  //pair

cout << it.first << " " << it.second << endl;
}

for(auto it = map.begin();it!=map.end();it++){
	cout << it->first << " " <<it->second << endl;
}


//UNORDERED MAP

unordered_map<int,int> mp;
unordered_map<pair<int,int>,int> map; //not possible
// O(1)
// O(n) n is size of map



//PAIR     // two different datatype paired together to form pair
pair<int,int> pr;
pr.first=1;
pr.second=2;

pair<int,pair<int,int>> pr={{1,2},3};
cout << pr.first.second; //prints 2
 
 vector<pair<int,int>> vec;
 set<pair<int,int>> st;
 map<pair<int,int>,int> map;

//MULTIMAP
 multimap<string,int> map; //stores multiple keys
 map.emplace("meet",34);
 map.emplace("meet",33);



