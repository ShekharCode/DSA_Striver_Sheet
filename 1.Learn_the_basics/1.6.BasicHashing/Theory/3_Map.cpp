/***
Until now, we have learned the method of number hashing but using this method 
we cannot hash large numbers like 109 or higher. We can solve this problem using
the STL map and unordered_map in C++ or the HashMap in Java collection. 
Now, we are going to discuss these concepts in detail and most of the concepts
are the same in map/unordered_map(in C++) and HashMap(in Java)
***/

// map<int,int> <key,value> - stores all the elements in the sorted order of keys
// unordered_ map<int,int> - doesnot follow any specific order

#include<bits./stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	//precompute
	map<int,int>mp;
	for(int i = 0;i<n;i++){
		mp[arr[i]]++;
	}
	
	int q;
	cin>>q;
	while(q--){
		int number;
		cin>>number;
		//fetch
		cout<<mp[number]<<endl;
	}
	return 0;
}
/***
Storing(i.e. insertion) and fetching(i.e. retrieval) in a C++ map, both take always O(logN) time complexity, where N = the size of the map. 

But the unordered_map in C++ and HashMap in Java, both take O(1) time complexity to perform storing(i.e. insertion) and fetching(i.e. retrieval). Now, it is valid for the best case and the average case. 

But in the worst case, this time complexity will be O(N) for unordered_map. Now, the worst case occurs very very rarely. It almost never happens and most of the time, we will be using unordered_map. 

Note: Our first priority will be always to use unordered_map and then map. If unordered_map gives a time limit exceeded error(TLE), we will then use the map.

The time complexity in the worst case is O(N) because of the internal collision.

In order to understand collision properly, we need to understand the concept of how the hashing work with an optimized space.
***/