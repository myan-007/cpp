
// maximum size of array in int main is 10^6 ->int ,double,char 10^7->bool

//globally 10^7 ->int ,double,char 10^8->bool



array<int, 23> ar;
ar.fill(9);	// fills whole array with 9
ar.at(index); // value of index
ar.size();
ar.front();
ar.back();



int ar[23];



//iterator
begin() 	//points first element of array
end()		//points empty memory right after the last element
rbegin()	//points last element
rend()		//points empty memory right before the first element


array<int, 4> ar ={1,2,3,4};
for (auto it= ar.begin();it!=ar.end();it++)
{
	cout << *it << " ";
}
//1 2 3 4

for (auto it= ar.rbegin();it!=ar.rend();it++)
{
	cout << *it << " ";
}
//4 3 2 1
//since it is reverse iterator so it doesn't need any it-- instead it uses it++

for (auto it= ar.end()-1;it>=ar.begin();it--)
{
	cout << *it << " ";
}
//4 3 2 1

for (auto it: ar){			//auto takes element itself and don't take it as pointer
	cout << it<< " ";
}

string st={"efsdf"};
for (auto c: st){			//auto takes character itself and don't take it as pointer
	cout << c<< " ";
}


