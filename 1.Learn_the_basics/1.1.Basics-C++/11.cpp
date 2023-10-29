#include<bits/stdc++.h>
using namespace std;

//return function with parameterized 


int maxx(int num1,int num2){
	if(num1>-= num2)return num1;
	else return num2;
}

int solve(int num1,int num2){
	int c;
	c = num1+num2;
	return c;
}

int main(){
	int a,b;
	cin>>a>>b;
	int ans1 = solve(a,b);
	int ans2 = maxx(a,b);
	cout<<ans1<<endl;
	cout<<ans2<<endl;;
}