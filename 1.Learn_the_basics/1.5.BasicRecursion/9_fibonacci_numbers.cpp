//pseudo code

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>ans;
    if(n<1)return ans;
    ans.push_back(0);
    if(n==1)return ans;
    ans.push_back(1);
    if(n==2)return ans;
    for(int i=2;i<n;i++){
        int next = ans[i-1]+ans[i-2];
        ans.push_back(next);
    }
    return ans;
}