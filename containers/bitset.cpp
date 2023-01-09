//bitset
// takes 1 bit 

bitset<10> bt; //takes 10 bits array of 1,0
//use in segment tree problems
cin >> bt;//11111

//all 
bt.all();//if all bit are set bit(1) then returns true else false

//any
bt.any();//if any of one is set then true
// bt =10000 true
//bt=00000 false

//count
bt.count(); //counts number of set bits

//flip
bt.flip(2); // flip bit 0 to 1 or 1 to 0 at index
bt.flip(); //flips all

//none
bt.none(); // if none is set then true else false
//10000 false
//00000 true

//set
bt.set(); // entire 5 position with 1
bt.set(2); // sets 2nd index with 1
bt.set(2,0); // sets 2nd index with 0


//reset
bt.reset(); // entire 5 position with 0
bt.reset(2); // sets 2nd index with 0


//size
//test
bt.test(1);// check it for 1 


