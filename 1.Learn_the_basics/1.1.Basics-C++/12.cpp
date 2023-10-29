#include<bits/stdc++.h>
using namespace std;


//pass by value- copy
void dosomething(int num){
	cout<<num<<endl;
	num+=5;
	cout<<num<<endl;
	num+=5;
	cout<<num<<endl;
}

int main(){
	int num;
	cin>>num;
	dosomething(num);
	cout<<num<<endl;
}