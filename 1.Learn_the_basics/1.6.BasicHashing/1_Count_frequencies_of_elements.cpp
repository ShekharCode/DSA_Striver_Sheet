//Coding Ninjas - 
//TC - O(N) SC - O(N)
//PSEUDO CODE
vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int>ans(n,0);
    for (int num : nums) {
      ans[num - 1]++;
    }
    return ans;
}