vector<vector<int>> &ans, vector<int> &nums, vector<int> curr, int start){
    ans.push_back(curr);
    for(int i=start;i<nums.size();i++){
        curr.push_back(nums[i]);
        recurse(ans,nums,curr,i+1);
        curr.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int> > ans;
    recurse(ans,nums,vector<int>(),0);
    return ans;
}
