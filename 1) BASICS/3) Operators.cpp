#include<iostream>
using namespace std;

int main(){
int a=4;
int b=5;

//****************arthematic operators**************

cout<< "the value of a+b is \t"<<a+b<<endl;
cout<< "the value of a-b is \t"<<a-b<<endl;
cout<< "the value of a*b is \t"<<a*b<<endl;
cout<< "the value of a/b is \t"<<a/b<<endl;
cout<< "the value of a++ is \t"<<a++<<endl;
cout<< "the value of a-- is \t"<<a--<<endl;
cout<< "the value of ++a is \t"<<++a<<endl;
cout<< "the value of --a is \t"<<--a<<endl;

//******************************************************

//***********comparision operator************

cout<<"the value of a==b is \t"<<(a==b)<<endl;
cout<<"the value of a!=b is \t"<<(a!=b)<<endl;
cout<<"the value of a>b is \t"<<(a>b)<<endl;
cout<<"the value of a<b is \t"<<(a<b)<<endl;
cout<<"the value of a<=b is \t"<<(a<=b)<<endl;
cout<<"the value of a>=b is \t"<<(a>=b)<<endl;

//******************************************************

//*******************logical operators***************

cout<<"value of && (and) logical operator is \t"<<((a==b)&& (a<b))<<endl;
// for and all conditions are true

cout<<"value of || (or) logical operator is \t"<<((a==b)|| (a<b))<<endl;
// for orany one conditions are true

cout<<"value of  (not) logical operator is \t"<<(!(a==b))<<endl;
// for not it shows alternate answer
//******************************************************



	return 0;
}


