// Hashing - prestore and fetch
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	//precompute _> if problem state - 10^6+1
	int hash[13] = {0};
	for(int i = 0;i<n;i++){
		hash[arr[i]]+=1;
	}
	int q;
	cin>>q;
	while(q--){
		int number;
		cin>>number;
		//fetch
		cout<<hash[number]<<endl;
	}
}
/***
In main()-> maximum array size of int = arr[10^6],if more it shows segmentation error
In global-> maximum array size of int = arr[10^7]

In main()-> maximum array size of boolean = arr[10^7],if more it shows segmentation error
In global-> maximum array size of boolean = arr[10^8]

***/