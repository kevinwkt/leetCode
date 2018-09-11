vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size(),1);
    for(int i=1;i<ans.size();i++) ans[i]=ans[i-1]*nums[i-1];

    int mult = 1;
    for(int j=ans.size()-1;j>=0;j--){
        ans[j]*=mult;
        mult*=nums[j];
    }
    return ans;
}
