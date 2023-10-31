//coding ninjas
//TC - O(N) sc - O(N)
//pseudo code
vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    
    map<int,int>mpp;
    vector<int>ans;
    for(int i = 0;i<v.size();i++){
        mpp[v[i]]++;
    }
    int maxFreq = 0, minFreq = v.size();
    int maxEle = 0, minEle = (int)1e9+1;
    // Traverse through map to find the elements.
    for (auto it : mpp) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }
    ans.push_back(maxEle);
    ans.push_back(minEle);
    return ans;
}