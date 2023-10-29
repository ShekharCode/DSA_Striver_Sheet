#include<bits/stdc++.h>
using namespace std;

//TC -> O(log10n) SC - O(1)
bool solve(){
	int n;
	cin>>n;
	int dup = n;
	int revN = 0;
	while(n>0){
		int lastdigit = n%10;
		n = n/10;
		revN = revN*10+lastdigit;
	}
	if(revN == dup)
	return 1;
	else
	return 0;
}
int main(){
	cout<<solve();
}