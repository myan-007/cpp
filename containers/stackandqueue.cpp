//STACK
//O(1)
//no iterators

stack<int> st;
st.pop(); // removes element
at.push(); //adds element
st.top(); // returns top element
st.empty(); // returns bool
st.size();

st.push(2);
st.push(4);
st.push(3);
st.push(1);

st.top(); //returns 1 
st.pop(); //deletes 1 

//no clear function
while(!st.empty()){
	st.pop();
}

if(!st.empty()){   // these should be checked when doing top
	cout << st.top();
}




//QUEUE
//no iterators
// O(1) constant

queue<int> q;
q.push(1);
q.push(5);
q.push(3);
q.push(6);

q.front(); //returns 1

q.pop(); //removes 1
q.front();//returns 5

while(!q.empty()){
	q.pop();
}


//PRIORITY QUEUE
//no iterators
//stores in sorted order ascending
//O(log n)

priority_queue<int> pq;
pq.push(1);
pq.push(5);
pq.push(3);
pq.push(6);

pq.top(); //returns 6 (largest)
pq.pop(); //deletes 6
pq.top(); // returns 5 (2nd largest)


priority_queue<pair<int,int>> pq; //stores 1,7 then 1,6 then 1,5
pq.push(1,5);
pq.push(1,6);
pq.push(1,7); 


priority_queue<int> pq;
pq.push(-1);
pq.push(-5);
pq.push(-3);
pq.push(-6);
cout << -1*pq.top() << endl;
// prints 1
// turns the min priority to max priority 
 

//deascending priority queue
//MINIMUM PRIORITY QUEUE
priority_queue<int,vector<int>,greater<int>> pq;
pq.push(1);
pq.push(5);
pq.push(3);
pq.push(6);

cout <<pq.top() << endl;








//DEQUEUE


dequeue<int> dq;
//push_front()  push_back()
//pop_front()  pop_back()
//at 
//clear 
//empty 
//size 
// all iterator

//LIST
list<int> ls;
//push_front() 
// push_back()
//pop_front()  
//pop_back()
//at 
//clear 
//empty 
//size 
// all iterator
//remove                   special
ls.push_front(1);
ls.push_front(2);
ls.push_front(3);
ls.remove(2); //does in O(1) //recommended









