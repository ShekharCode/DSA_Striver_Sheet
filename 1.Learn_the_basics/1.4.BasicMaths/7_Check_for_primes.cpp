#include<bits/stdc++.h>
using namespace std;

//Brute Force - O(N) - looping for 1 to N and check for divisiors ie, cnt and if cnt = 2 ,it is prime

void solve(){
	int n;
	cin>>n;
	int cnt = 0;
	for(int i = 1;i*i<=n;i++){
		if(n%i == 0){
			cnt++;
			if((n/i)!=i){
				cnt++;
			}
		}
	}
	if(cnt == 2){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
int main(){
	solve();-
}