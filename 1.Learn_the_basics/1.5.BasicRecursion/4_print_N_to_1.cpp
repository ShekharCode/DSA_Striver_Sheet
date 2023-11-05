//pseudo code

void func(int i,int x,vector<int>&ans){
    if(i<1) return;
    ans.push_back(i);
    func(i-1,x,ans);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    func(x,x,ans);
    return ans;
}