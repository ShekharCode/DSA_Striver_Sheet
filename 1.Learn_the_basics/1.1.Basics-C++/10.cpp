//functions are set of code which performs something for you.
//functions are used to modularise the code.
//functions are used to reduce readability.
//functions are used to same code multiple times.

//Types
//1.void -> which does not return any thing 
//2.return ->
//parameterized functions
//non-pararmeterized functions


#include<bits/stdc++.h>
using namespace std;

//void - non parameterized
void printName(){
	cout<<"Hey Striver"<<endl;
}
//void - parameterized
void printName1(string Name){
	cout<<"Hey "<<Name<<endl;
}
int main(){
	printName();
	string name;
	cin>>name;
	printName1(name);
	return 0;
}