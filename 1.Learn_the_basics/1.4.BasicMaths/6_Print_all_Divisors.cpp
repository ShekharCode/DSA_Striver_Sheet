#include<bits/stdc++.h>
using namespace std;
// Brute Force -> O(n) sc - O(1)

/***
void solve(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(n%i == 0){
			cout<<i;
		}
	}
}

***/

// Optimized Approach -> TC - O(sqrt(N)) SC-O(1)
// Note : The ouput will not be in order
void solve(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i = 1;i*i<=n;i++){
		if(n%i == 0){
			v.push_back(i);
			if((n/i)!=i){
				v.push_back((n/i));
			}
		}
	}
	sort(v.begin(),v.end());
	for(auto it:v){
		cout<<it<<endl;
	}
}
int main(){
	solve();
}