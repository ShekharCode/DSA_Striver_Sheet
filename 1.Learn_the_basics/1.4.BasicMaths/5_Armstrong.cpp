#include<bits/stdc++.h>
using namespace std;

//TC -> O(logN)
bool solve(){
	int n;
	cin>>n;
	int temp =n;
	int cnt = 0;
	int sumofpower = 0;
	while(temp>0){
		cnt+=1;
		temp = temp/10;
	}
	temp = n;
	while(temp>0){
		int lastdigit = temp%10;
		int power = 1;
		for(int i =0;i<cnt;i++){
			power *=lastdigit;
		}
		sumofpower+=power; 
		temp = temp/10;
	}
	if(sumofpower == n){
		return 1;
	}
	else return 0;
	
}

int main(){
	cout<<solve();
}