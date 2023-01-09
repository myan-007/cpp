//VECTOR

vector<int> v; // {empty}

v.size(); //0
v.push_back(0);// {0}
v.push_back(2);//{0,2}
v.size(); //2

v.pop_back(); //{0} removes last element 
v.clear(); //{}


vector<int> vec1(4,0); //{0,0,0,0}
vector<int> vec2(4,10); //{10,10,10,10}
vector<int> vec3(vec2.begin(),vec2.end()); // [) copy vec2 to vec3
vector<int> vec3(vec2); // [) copy vec2 to vec3

vector<int> v1;
v1.push_back(1);
v1.emplace_back(1); // takes less time than push_back 
v1.push_back(3);
v1.push_back(2);
v1.push_back(5);

vector<int> v2(v1.begin(),v1.begin()+2); //{1,1}

//all iterator can used here




//2D vector

vector<vector<int> vv;

vector<int> v1;
v.push_back(0);
v.push_back(2);
vector<int> v2;
v.push_back(1);
v.push_back(3);
vector<int> v3;
v.push_back(10);
v.push_back(30);

vv.push_back(v1);
vv.push_back(v2);
vv.push_back(v3);


for(auto vctr=vv){
	for(auto it= vctr ){
		cout << it <<" ";
	}
	cout <<"\n";
}

for (int i = 0; i < vv.size(); ++i)
{
	for (int j = 0; j < vv[i].size; ++j)
	{
		cout << vv[i][j] << " ";
	}
	cout << "\n";
}


//10X20
vector<vector<int>> vv(10,vector<int> (20,0));
vv.push_back(vector<int> (20,0));

vv[2].push_back(2);


vector<int> ar[10];

//10 * 20 *30
vector<vector<vector<int>>> vvv(30,vector<vector<int>> vv(20,vector<int> (30,0)));




abbaca
mask=0;
abc

















