#include<bits/stdc++.h>
using namespace std;
//write a program that takes an input of an age 
//and prints if you are adult or not 
//>=18,yes
//<18,no

int main(){
    int age;
    cin>>age;
    if (age >=18){
        cout<<"you are an adult";
    }
    else{
        cout<<"you are not an adult";
    }
    return 0;
}