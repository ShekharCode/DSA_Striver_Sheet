//pseudo code

void reverseArrayhelper(int l,int r,vector<int>&nums){
    if(l>=r)
    return;
    swap(nums[l],nums[r]);
    reverseArrayhelper(l+1, r-1, nums);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int l = 0;
    int r = n-1;
    reverseArrayhelper(l,r,nums);
    return nums;

}
