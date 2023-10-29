#include<bits/stdc++.h>
using namespace std;

//Brute Force -> TC - O(min(n1,n2))
/***
void solve(){
	int n1,n2;
	cin>>n1>>n2;
	for(int i = 1;i<=min(a,b);i++){
		if(n1%i == 0  && n2%i ==0){
			gcd = i;
		}
	}
	cout<<gcd<<endl;
}
***/

//BruteForce with better approach
/***
void solve(){
	int n1,n2;
	cin>>n1>>n2;
	for(int i = min(n1,n2);i>0;i--){
		if(n1%i ==0 && n2%i == 0){
			gcd = i;
		}
	}
	cout<<gcd<<endl;
}
***/
//Euclidean Algorithm
//gcd(a,b) = gcd(a%b,b) a>b
//gcd(a,b) = gcd(a,b%a) b>a
//Optimised Approach -> TC - O(log(min(a,b)))
void solve(){
	int a,b;
	cin>>a>>b;
	while(a>0 && b>0){
		if(a>b) a = a%b;
		else b = b%a;
	}
	if(a==0) cout<<b;
	else cout<<a;
}
int main(){
	solve();
}