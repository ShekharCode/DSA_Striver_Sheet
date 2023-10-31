#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int len = s.size();
	//precompute
	int hash[26] = {0};
	for(int i = 0;i<len;i++){
		hash[s[i]-'a']++;
	}
	int q;
	cin>>q;
	while(q--){
		char c;
		cin>>c;
		//fetch
		cout<<hash[c-'a']<<endl;
	}
	return 0;
}
//for all the characters - upper case and lower case.
/***
int main() {

    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
    return 0;
}
***/