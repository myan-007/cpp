#include<iostream>
using namespace std;

class Time{
private:
	int hour;
	int minutes;
	int second;

public:
	Time(){

	}
	Time(int a,int b,int c) {
		hour=a;
		minutes=b;
		second=c;
	}
	void getter(){
		cout <<"hour "<< hour<<"\n";
		cout <<"minutes "<< minutes<<"\n";
		cout <<"second "<< second<<"\n";
	}
	Time operator +(Time &a){

		Time res;
		res.hour=hour+a.hour;
		res.minutes=minutes+a.minutes;
		res.second=second+a.second;
		if(res.second>60){
			res.minutes++;
			res.second%=60;
		}
		if(res.minutes>60){
			res.hour++;
			res.minutes%=60;	
		}
		return res;
	}

};


int main(){
	Time t1(1,45,34),t2(2,15,56);

	Time t3=t1+t2;
	t3.getter();


	return 0;
}