vector<int> &arr, vector<vector<int>> &ans, int curr) {
    if(curr==arr.size()) {
        ans.push_back(arr);
        return;
    }
    
    for(int i=curr; i<arr.size(); i++){
        swap(arr[i],arr[curr]);
        recurse(arr,ans,curr+1);
        swap(arr[i],arr[curr]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    recurse(nums, ans, 0);
    return ans;
}
