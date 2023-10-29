#include<bits/stdc++.h>
using namespace std;


//pass by referencce - passing th address
void doSomething(string &s){
	s[0] = 't';
	cout<<s<<endl;
}

int main(){
	string s = "raja";
	doSomething(s);
	cout<<s<<endl;
	return 0;
}