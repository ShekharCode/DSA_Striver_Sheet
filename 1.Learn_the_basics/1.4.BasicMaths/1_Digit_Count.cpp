#include<bits/stdc++.h>
using namespace std;


//TC - O(log10(n)) SC - O(1)

//int cnt = int(log10(n)+1)
void solve(){
	int n;
	cin>>n;
	int cnt = 0;
	while(n>0){
		cnt = cnt+1;
		n = n/10;
	}
	cout<<cnt<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
   	solve();
   }
   return 0;
}