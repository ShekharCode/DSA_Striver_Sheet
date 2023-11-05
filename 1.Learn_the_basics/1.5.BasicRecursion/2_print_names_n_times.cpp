//pseudo code

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string>ans;
	if(n<1){
		return ans;
	}
	ans = printNTimes(n-1);
	ans.push_back("Coding Ninjas");

}