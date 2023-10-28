// array and strings
#include<bits/stdc++.h>
using namespace std;

int main(){
  //1D array
  int arr[5];
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

  arr[3] = arr[3]+10;
  arr[3]=100;
  cout<<arr[3]<<endl;

  //2D array
  int arr2d[3][4];
  arr2d[1][2] = 420;
  cout<<arr2d[1][2]<<endl;

  //Strings
  string s = "RajaShekhar";
  int len = s.size();
  cout<<s[0]<<endl;
  cout<<s[len-1]<<endl;
  s[len-1] = 'z';
  cout<<s[len-1];
  return 0;

}