#include <iostream>
#include <string.h>
#define N 100
using namespace std;
class MyString{
public:
	char s[N];
public:
	MyString(){

	}
	MyString(char a[]){
		strcpy(s,a);
	}
	MyString operator +(MyString &a){
		MyString res;
		
		strcat(s,a.s);
		strcpy(res.s,s);
		return res;
	}
	bool operator ==(MyString &a){
		if(strcmp(s,a.s)>0) return false;
		else
			return true;
	}
};
int main(){
	char str[]="hey";
	char sd[]="hello";
	MyString s1(str);
	MyString s2(sd);
	MyString s3=s1+s2;
	cout << s3.s << "\n";

	cout << (s1==s2);
	return 0;
}