#include<bits/stdc++.h>
using namespace std;

//TC -> O(log10n) SC - O(1)
void solve(){
	int n;
	cin>>n;
	int revN = 0;
	while(n>0){
		int lastdigit = n%10;
		n = n/10;
		revN = (revN*10)+lastdigit;
	}
	cout<<revN<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}