// Pseudo Code

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    if(x<1){
        return ans;
    }
    ans = printNos(x-1);
    ans.push_back(x);
    
    
}