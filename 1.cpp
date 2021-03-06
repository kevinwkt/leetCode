vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    vector<int> v;
    for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i])==mp.end()) mp.insert({nums[i],i});
        else {
            v.push_back(mp[target-nums[i]]);
            v.push_back(i);
        }
    }
    return v;
}
